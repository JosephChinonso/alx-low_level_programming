#!/bin/bash

# Collect all the .c files in the current directory
c_files=$(find . -type f -name "*.c")

# Compile each .c file and create corresponding .o files
for file in $c_files; do
    gcc -c $file -o ${file%.c}.o
done

# Create the static library liball.a from the generated .o files
ar rcs liball.a *.o

# Cleanup: remove the temporary .o files
rm -f *.o

echo "Static library liball.a created successfully."

