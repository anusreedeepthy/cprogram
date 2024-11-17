// Problem Statement 2: Simple Interest Calculator
 
// Description: Develop a C program that calculates simple interest based on user input for principal amount, rate of interest, and time period. The program should use a function to compute interest and demonstrate call by value.
 
// Requirements:
// Implement a function that takes three parameters (principal, rate, time) and returns the calculated simple interest.
// Use appropriate data types for financial calculations (e.g., float or double).
// Utilize arithmetic operators to compute simple interest using the formula 
// SI = P×R×T/100
// Example Input/Output:
 
// Enter principal amount: 1000
// Enter rate of interest: 5
// Enter time period (in years): 3
// Simple Interest is: 150.0

#include<stdio.h>
float interest(int,float,int);
int main(){
    int n,p;
    float final,m;
    printf("enter the principle amount");
    scanf("%d",&n);
    printf("enter the rate of interest");
    scanf("%f",&m);
    printf("enter the time period in an year");
    scanf("%d",&p);
    final = interest(n,m,p);
    printf("the simple interest is %.2f",final);


}
float interest (int a,float b,int c){
    float result ;
    result = (a*b*c)/100;
    return result;
}