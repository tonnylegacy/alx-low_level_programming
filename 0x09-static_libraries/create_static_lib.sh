#!/bin/bash

# Compile each .c file into object files
gcc -c *.c -std=gnu89

# Create the static library
ar rcs liball.a *.o

# Verify the library and object files
echo "Contents of liball.a:"
ar -t liball.a

# Cleanup: remove the object files
rm *.o
