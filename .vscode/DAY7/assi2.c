// Assignment 2: Using const with Pointers

// Objective: Understand how to use const with pointers to prevent modification of pointed values.

// Create a program that uses a pointer to a constant integer. Attempt to modify the value through the pointer and observe the compiler's response.

#include<stdio.h>
int main(){

    int a=10;
    int b=20;
    int const *ptr = &a;
    printf("%d\n",*ptr);
    ptr = &b;
    printf("%d",*ptr);
}