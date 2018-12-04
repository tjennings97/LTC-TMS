# LTC-TMS Code Repository - Fall 2018

### Basic commands to put your work on Github

#### step 1: get the base project code onto your computer
copy the codebase to your computer
```
git clone https://github.com/tan-ku/LTC-TMS.git
```

create a branch for your project
```
git checkout -b my_example_branch
```

#### step 2: update/add new code
use a code editor of your choice to make changes

#### step 3: make the version control tool (git) track your new code
(option 1) stage all changes in your directory to be part of the branch history
```
git add .
```

(option 2) stage a file in to be part of the branch history
```
git add ./my_example_file.jsx
```

check which files are staged
```
git status
```

check which lines of code have changed
```
git diff
```

#### step 4: make your changes part of the code's history
add staged files as a single commit to the branch history
```
git commit -m 'this is a message describing what changed in this commit'
```

#### step 5: make the remote server (Github) aware of your updates
(first time) tell Github that there is a new branch and update the branch
```
git push --set-upstream origin my_example_branch
```

(subsequent times) update the branch on Github
```
git push
```

Rename a branch

git branch -m <new-branch-name>
