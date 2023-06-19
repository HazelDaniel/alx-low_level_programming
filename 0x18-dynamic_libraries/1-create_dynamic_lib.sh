#!/bin/bash

for i in $(ls *.c); do
	`gcc -fPIC -c $i`
done
gcc -shared -o liball.so *.o
