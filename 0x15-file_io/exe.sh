#!/bin/bash
if [ $# -eq 1 ];then
        betty $1
fi

git status
sleep 3
echo -e "\n"
git add .
read  message
git commit -m "$message"
echo -e "\n"
git push
