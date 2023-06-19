#!/bin/bash


if [[ -f _make_lib_true_ ]]; then
	for i in $(cat libfiles); do
		temp=$(echo $i | tr -dc '/' | wc -c)
		res=$(echo "$i" | cut -d '/' -f $(($temp + 1)))
		`gcc -fPIC -c $res`
	done
	gcc -shared -o libdynamic.so *.o
	rm libfiles 2> /dev/null
	rm _make_lib_true_ 2> /dev/null
fi
