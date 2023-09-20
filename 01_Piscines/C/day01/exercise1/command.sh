#!/usr/bin/env sh

groups $USER | tr [:blank:]  "," | cut -d"," -f4- | tr -d '\n'
