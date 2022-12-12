#!/bin/bash
gcc -Wall -Werror -pedantic -fpic -c *.c
gcc -shared -o -liball.so *.o