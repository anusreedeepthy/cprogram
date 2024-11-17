// Assignment 9: Constant Global Variables

// Objective: Explore global constants and their accessibility across functions.

// Write a program that declares a global constant variable and accesses it from multiple functions without modifying its value.

#include<stdio.h>
const int variable =10;
void display(int a){
    int v = variable + a;
    printf("%d",v);
}

int main(){
    int n;
    printf("enter a vlaue");
    scanf("%d",&n);
    display(n);

    



}