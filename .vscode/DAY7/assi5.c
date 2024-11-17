// Assignment 5: Using const in Function Parameters

// Objective: Understand how to use const with function parameters.

// Write a function that takes a constant integer as an argument and prints its value. Attempting to modify this parameter inside the function should result in an error.
#include<stdio.h>
void modify(const int num ){
    printf("the number is %d",num);
    // num = 10;
}

int main(){
    int a=10;
    modify(a);
    return 0;

}