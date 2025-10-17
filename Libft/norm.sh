#!/bin/bash

files=$(find -name "*.c")
files+=" "
files+=$(find -name "*.h")

for filename in $files; do
	echo $filename $(wc -l $filename)
done
