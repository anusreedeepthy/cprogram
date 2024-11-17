// Assignment 4: Constant Pointer to Constant Value

// Objective: Combine both constant pointers and constant values.

// Create a program that declares a constant pointer to a constant integer. Demonstrate that neither the pointer nor the value it points to can be changed.

#include<stdio.h>
int main(){

    int a=10;
    int b=20;
    const int * const ptr = &a;
    printf("%d\n",*ptr);
    // *ptr = 15;
    // printf("%d\n",*ptr);
}