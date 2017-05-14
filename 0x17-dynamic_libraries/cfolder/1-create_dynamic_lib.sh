#!/bin/bash
gcc -Wall -Werror -pedantic -Wextra -c -fpic *.c
gcc -shared *.o -o liball.so
