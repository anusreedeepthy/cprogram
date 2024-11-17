// Problem Statement 1: Arithmetic Operations Calculator
 
// Description: Write a C program that performs basic arithmetic operations (addition, subtraction, multiplication, and division) on two numbers provided by the user. The program should use functions to perform each operation and demonstrate call by value.
 
// Requirements:
// Create separate functions for addition, subtraction, multiplication, and division.
// Each function should take two parameters (the numbers) and return the result.
// Use appropriate data types for the variables.
// Use operators for arithmetic calculations.
 
// Example Input/Output:
 
// Enter first number: 10
// Enter second number: 5
// Addition: 15
// Subtraction: 5
// Multiplication: 50
// Division: 2.0

#include<stdio.h>
int add(int,int);
int sub(int,int);
int mult(int,int);
float div(float,float);
int main(){
    int n,m ,result;
    float result1;
    printf("enter the number");
    scanf("%d",&n);
    printf("enter the second number");
    scanf("%d",&m);
    result = add(n,m);
    printf("Addition %d\n",result);
    result = sub(n,m);
    printf("subtraction %d\n",result);
    result = mult(n,m);
    printf("multiplication %d\n",result);
     result1 = div(n,m);
    printf("divition %.2f\n",result1);

}
int add (int a,int b){
    int result =a+b;
    return result;

}
int sub (int a,int b){
     int result =a-b;
    return result;

}
int mult (int a,int b){
     int result =a*b;
    return result;

}
float div (float a,float b){

     float result =a/b;
    return result;

}
