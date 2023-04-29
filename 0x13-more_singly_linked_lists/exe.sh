#!/bin/bash
if [ $# -eq 1 ];then
        betty $1
fi

git status
sleep 3

git add .
read  message
git commit -m "$message"
echo \n\n

git push
