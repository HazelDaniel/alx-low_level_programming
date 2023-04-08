#!/bin/bash

LOC=$(pwd);

for i in $(ls $LOC | grep '.`*\.c')
do
	objname=$(echo $i | grep -Po '^[[:graph:]]+(?=\.c$)').o
	gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c $LOC/$i -o $LOC/$objname
	ar -rc liball.a *.o
done
