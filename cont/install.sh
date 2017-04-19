#!/usr/bin/env bash

MYBIN='/usr/local/bin'
DIR="$MYBIN/cont_tmpl_creator" 

mkdir $DIR &> /dev/null
cp -r * $DIR

echo """alias contt="$DIR/contt.py"""" >> ~/.bash_profile