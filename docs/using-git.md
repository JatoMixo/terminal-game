# How to use Git (and Github)

A person i'm gonna work with doesn't know how to use git yet, so this is a guide.

## Tracking changes

First things first, git is just a version control system for tracking changes made to repositories.
You can create a repo by using the command
```bash
git init .
```

Whenever you create or modify a file in a repo, it'll count as an untracked change.
To stage/add it you just run the command.
```bash
git add FILENAME
git add -A # for staging all the changes with a single command
```

Once you have tracked all the files, you can commit them to the git repo by using the command
```bash
git commit -m COMMIT_MESSAGE
```

Almost always with a commit message describing what that does.

## Working with branches
In a git repo there are different branches, the `main` one is the default one.
These branches are useful for making different changes and versions of the program to test
without having to deal with breaking anything and making it hard to fix.

Also useful for working with more people, so that each person works on a branch and then merge
the changes to the main one.

To create a new branch, you can just do
```bash
git branch BRANCH_NAME
```

Then, you can change to that branch by using the switch command
```bash
git branch # list the available branches
git switch BRANCH_NAME
```

Commit all the changes you want, once that's done you can merge them back to the `main` branch.
```bash
git switch main # go back to the main branch
git merge BRANCH_NAME # grab the commits from the other branch and apply them to main
```

## Working with remote github repos

This is assuming the github repo is yours, and so you have direct access to it.
You first create the repo in github, then clone it, github already provides a command for this.
```bash
git clone https://github.com/YourGithubUsername/YourRepoName.git
```

After that, you can work on it normally, and after doing the commits you want it's time to push them
to the original github repo. It's as easy as doing:
```bash
git push -u origin BRANCH_NAME
```

## Working with other github repos

From the github website, make a fork of the repo, this will be your own copy of it.
Then clone your repo and create and switch to a new branch, commit all the changes you want
and then push them to github.
When you go back to the website, it'll probably tell you "This branch had recent changes, do you want
to open a pull request?"

Pull request are changes you send to a remote github repo to contribute to it, they might get merged
or just closed without merging, the owner of the repos decides.

In this case, create the pull request with a good name and description of what it does/changes, and open it.

The author of the repo might ask you for changes, merge it, or close it, whatever.

## Some last words

Obviously you can do a lot more than this with git and github, like undoing commits, but this is the 
basic stuff you need for contributing to open source projects. Whenever you need anything just search it
in google.

