// Assignment 1: Constant Variable Declaration

// Objective: Learn to declare and initialize constant variables.
// Write a program that declares a constant integer variable for the value of Pi (3.14) and prints it. Ensure that any attempt to modify this variable results in a compile-time error.
#include <stdio.h>

int main() {
    const float PI = 3.14;  

    printf("The value of Pi is: %f\n", PI);

    return 0;
}
