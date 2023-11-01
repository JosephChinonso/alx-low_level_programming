#!/bin/bash
gcc -wall -pedantic -werror -wextra -c *.c
ar -re liball.a *.o
ranlib liball.a
