#!/bin/bash

# Compile all .c files into object files
gcc -c *.c

# Create a dynamic library named liball.so from the object files
gcc -shared -o liball.so *.o

# Clean up the temporary object files
rm *.o

