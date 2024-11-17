// Assignment 8: Constant Variables in Loops

// Objective: Learn how constants can be used within loops for fixed iterations.

// Create a program that uses a constant variable to define the number of iterations in a loop, ensuring it cannot be modified during execution

#include<stdio.h>
int main(){
    const int fixed = 6;
    for(int i=0;i<fixed;i++){
        printf("%d\n",i);
    }
    // fixed =10;
}