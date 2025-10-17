#!/bin/bash

files=$(find -name "*.c")
files+=" "
files+=$(find -name "*.h")
mkdir norm_correct

for filename in $files; do
	python3 -m c_formatter_42 < $filename > ./norm_correct/$filename
	echo $filename $(wc -l $filename)
done
