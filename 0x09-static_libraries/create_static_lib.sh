#!/bin/bash
gcc -wall -werror -wextra -pedantic -c *.c
ar -rcs liball.a *.o
ranlib liball.a
