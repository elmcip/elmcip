# Description

This document describe how to get a local copy of the ELMCIP up and running on your local computer.

## Requirements

* A working installation of Apache, MySQL/Mariadb and PHP 5.4/5.5.
* Create a empty database named 'elmcip'.
* Database user name 'elmcip' with full access to the elmcip database.
* Set password for user elmcip to 'elmcip'.
* Git installed and configured.
* Drush installed (https://github.com/drush-ops/drush).
* A working ssh connection to Norstore application and database server. Auth should not be password based but by using your private/public SHA -key.
* You must be in your local elmcip directory (e.g. websites/sites/elmcip)

## Installation

Get main repository and our custom modules:

    git clone git@github.com:elmcip/elmcip.git

Get drupal core and all 3-part modules:

    git submodule update --init

Initialize the new site:

    bin/site-init <norstore username>

You should now have a fully functional site, with all content, except attached documents/files and images.

### Getting document and image-files from production

Running the following script will copy image and documents added to the elmcip content.

    bin/reset2production

The very first time you run this will it transferee about 600MB. After this initial sync it will only transferee changed and new files on each reset. We are omitting all PDF and movie files due to their large size aka transferee time.

## Usage

### Grab a copy of production and apply lates updates.

This will automagically update your local installation.

    bin/reset2production <NORSTORE USERNAME>
    bin/site-upgrade <git branch name>

* Grab copy of the database and any pictures added since last time reset2production was run.
* Move to master branch or your optional branch and pull in any new commits and update the drupal submodule.
* Run any pending update tasks to update database 

Omit to run 'bin/site-upgrade' if you wish to have an exact copy of production.

### Log in as user 1 (site admin) without password

    bin/site-drush uli

Logs into to dev site as user 1 (site administrator).

### Turn on development settings module. 

    bin/site-drush en development_settings

## Contribute changes, fixes and improvements back to ELMCIP.

Before you do any changes and try to commit them, make sure your system is clean and up to date. Make sure you create a issue on github https://github.com/elmcip/elmcip account or find a already reported issue number that describe the scope of the work.

    bin/reset2production <NORSTORE USERNAME>
Replace your current installation with a fresh copy of elmcip.net (files and database).

    bin/site-upgrade
Upgrade your new copy to the latest code found in the git master branch and run any needed updates.

    git checkout -b issue_number
This create your own branch from master you can safely work on. Do your changes and add them to git. These changes need to pushed to github before test.elmcip.net or other developers can test them.

If the issue then is confirmed working and can be safely applied to production will the code make it into the master branch. Snapshots of the master branch is what in the end makes the production branch.

### Using Feature module with drush

Check all modules and make sure our feature modules are overridden.

    bin/site-drush fl

Revert a overridden feature module. This overwrite the database with configuration and settings stored in the feature module.

    bin/site-drush fr <module name>

Intended changes is copied from the database and into the feature module with

    bin/site-drush fu <module name>

Show the difference between the database and configuration stored in the feature module.

    bin/site-drush fd <module name>

### Best practise in git

* Commit often.
* Commit should always contain working code. Do not commit and push half baked code. That might break test and beta.elmcip.net installation and will get reverted from the repository.
* Write informative commit messages. Write why you did the changes, not what you just changed, Git will tell us that.
* Remember to push your changes.

### git workflow

*git status* - to get status and make sure you do not have any changed files. To get rid of any unintended edited files use *git reset* or git *reset --hard*

## Troubleshooting

### Problems importing database
If your unable to restore (import) the full database, your mysql/mariadb resource settings my be to low. Try upping this to:

     max_allowed_packet = 100M

in your my.cnf or server.cnf and restart the db. server

    mysql.server restart

### Problems changing Drupal permissions
Problems getting changing permissions on '/admin/people/permissions'? Check your apache/php-error log. You might then see warnings like:

        PHP Warning:  Unknown: Input variables exceeded 1000. To increase the limit change max_input_vars in php.ini. in Unknown on line 0, referer: http://elmcip.dev/admin/people/permissions

To fix it, track down your php.ini (/usr/local/etc/php/5.5/php.ini or 5.4) and search for this line. Uncomment the max_input_vars line and alter it to:

        ; How many GET/POST/COOKIE input variables may be accepted
        max_input_vars = 2000
