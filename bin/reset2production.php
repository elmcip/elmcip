#!/usr/bin/env php
<?php declare(strict_types = 1);

define('KUBERNETES_NAME_SPACE', 'elmcip-ns9035k');
define('CLUSTER', 'nird-trd');

$kubectl = new Kubectl();
$kubed = new Kubed();
$pod = new Pods($kubectl, $kubed);
$pods = $pod->getPods();

$elmcip = new Kubernetes($pods);
$elmcip->createSnapshot();
$elmcip->getSnapshot();

final class Kubed
{
    private $version;

    public function __construct()
    {
        exec('kubed -version', $kubed);
        if (!$kubed) {
            throw new \RuntimeException(
                'kubed is not installed. Read: TBD' . PHP_EOL
            );
        }

        $this->version = $kubed;
    }

    public function getVersion(): string
    {
        return $this->version[0];
    }

    public function renew()
    {
        return exec('kubed -renew ' . CLUSTER, $login);
    }
}

final class Kubectl
{
    private $version;

    public function __construct()
    {
        exec('kubectl version --client', $kubectl);
        if (!$kubectl) {
            throw new \RuntimeException(
                'kubectl is not installed. Read:  
                    https://kubernetes.io/docs/tasks/tools/install-kubectl'
            );
        }

        $this->version = $kubectl;
    }

    public function getVersion(): string
    {
        return $this->version[0];
    }

    public function pod()
    {
        return exec('kubectl get pod -n ' . KUBERNETES_NAME_SPACE, $results);
    }
}

final class Pods
{
    private $pods;
    private $kubectl;
    private $kubed;

    public function __construct(Kubectl $kubectl, Kubed $kubed)
    {
        $this->kubectl = $kubectl;
        $this->kubed = $kubed;
    }

    public function getPods(): Pods
    {
        if (!$this->kubectl->pod()) {
            $foo = $this->kubed->renew();
            $results = $this->kubectl->pod();
        }

        $object = new self(new Kubectl(), new Kubed());
        $pods = $object->parseResult($results);

        foreach ($pods as $pod) {
          array_walk($pod, [$object, 'podName']);
        }

        return $object;
    }

  private function parseResult(array $results): array {
    $pods = [];

    foreach ($results as $result) {
      if (strpos($result, KUBERNETES_NAME_SPACE) !== false) {
        $pods[] = explode('  ', $result);
      }
    }

    return $pods;
  }

  private function podName($item, $key): void {
    if (strpos($item, KUBERNETES_NAME_SPACE) !== false) {
      $this->pods[] = $item;
    }
  }

  public function FirstPod() {
    return $this->pods[0];
  }
}

/**
 * Class Kubernetes
 *
 * Helper service.
 */
final class Kubernetes {

  private $pods;

  public function __construct(Pods $pods) {
    $this->pods = $pods;
  }

  public function renewToken(): array {
    $results = [];
    exec('kubed -renew ' . CLUSTER, $results);

    return $results;
  }

  public function createSnapshot() {
    echo 'Creating production snapshot at POD: ' . $this->pods->FirstPod() . PHP_EOL;
    exec('kubectl exec -it ' . $this->pods->FirstPod() . ' -n ' . KUBERNETES_NAME_SPACE . ' -- /elmcip/create_snapshot', $results);
    foreach ($results as $result) {
      print $result . PHP_EOL;
    }
  }

  public function getSnapshot() {
    $fileName = 'latest.elmcip.sql.gz';
    $existingSnapshot = filemtime('site/' . $fileName);

    echo 'Copy production snapshot from ' . $this->pods->FirstPod() . PHP_EOL;
    exec('kubectl cp '. KUBERNETES_NAME_SPACE . '/' . $this->pods->FirstPod() . ':elmcip/latest.elmcip.sql.gz site/latest.elmcip.sql.gz', $result);

    if ($existingSnapshot !== filemtime('site/' . $fileName)){
      echo $fileName . ' was successfully copied from ' . $this->pods->FirstPod() . PHP_EOL;
    }

  }
}

