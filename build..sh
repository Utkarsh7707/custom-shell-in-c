#!/bin/bash

# Build the C program with ncurses
gcc main.c -o main -lncurses

# Check if the build was successful
if [ $? -eq 0 ]; then
    echo "Build successful. Running the program..."
    # Run the compiled program
    ./main
else
    echo "Build failed. Please check your code for errors."
fi
