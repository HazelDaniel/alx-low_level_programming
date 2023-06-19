#!/bin/bash

cat main.h | grep -Po '(((?<= )|(?<=\*)))\w+(?=\()' | tee _file_functions_ 1> /dev/null
count=0
for line in $(cat _file_functions_); do
	line_cut=$(echo $line | tr -dc '[:alnum:]')
	res=$(find ../ -maxdepth 2 -type d -exec grep -Rl $line \{\} \; | grep -i $line_cut | sed -n '1,1p')
	cp $res .
	if [[ -f ./libfiles ]]; then
		if [[ $count == 0 ]]; then
			echo unsuccessful. there\'s a file named libfiles in your current folder
			rm _file_functions_
			exit 1
		fi
		echo $res >> libfiles
	else
		echo $res > libfiles
	fi
	let count=count+1 
done
rm _file_functions_
touch _make_lib_true_
