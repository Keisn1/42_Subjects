#!/usr/bin/env sh

cat people.txt | awk '{print tolower($0)}' | grep "^z" | sort -r
