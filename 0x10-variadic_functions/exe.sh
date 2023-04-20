#!/bin/bash
git add .
read -p "$message"
git commit -m "message"
git push
