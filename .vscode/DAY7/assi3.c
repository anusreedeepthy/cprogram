// Assignment 3: Constant Pointer

// Objective: Learn about constant pointers and their usage.

// Write a program that declares a constant pointer to an integer and demonstrates that you cannot change the address stored in the pointer.

#include<stdio.h>
int main(){

    int a=10;
    int b=20;
    int *const ptr = &a;
    printf("%d\n",*ptr);
    // ptr = &b; error occurs //*ptr = & b 
    *ptr =30;
    printf("%d",*ptr);
}