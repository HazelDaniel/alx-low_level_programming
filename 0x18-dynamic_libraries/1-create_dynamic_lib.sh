#!/bin/bash

for i in $(cat libfiles); do
	temp=$(echo $i | tr -dc '/' | wc -c)
	res=$(echo "$i" | cut -d '/' -f $(($temp + 1)))
	`gcc -fPIC -c $res`
done
gcc -shared -o libdynamic.so *.o
