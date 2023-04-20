#!/bin/bash
if [$1];then
	betty $1

else 
	git status
	git add .
	read  message
	git commit -m "$message"
	git push
fi
