#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -re liball.a *.o
ranlib liball.a
