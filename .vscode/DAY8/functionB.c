// Problem Statement 2: Temperature Conversion
 
// Description: Develop a C program that converts temperatures between Celsius and Fahrenheit. The program should use functions to handle the conversions and demonstrate call by value.
 
// Requirements:
// Create two functions: one for converting Celsius to Fahrenheit and another for converting Fahrenheit to Celsius.
// Each function should accept a temperature value as an argument and return the converted temperature.
// Use appropriate data types for temperature values.
// Use arithmetic operators to perform the conversion calculations.
 
// Example Input/Output:
 
// Enter temperature in Celsius: 25
// Temperature in Fahrenheit: 77.0
 
// Enter temperature in Fahrenheit: 77
// Temperature in Celsius: 25.0


#include<stdio.h>
float celsiustofahrenheit(float);
float fahrenheit(float);
int main(){
    float n,m,result;
    printf("enter the temperature in celsius");
    scanf("%f",&n);
    result= celsiustofahrenheit(n);
    printf("converting celsius in to fahrenheit %.2f\n",result);
    printf("enter the temperature in Fahrenheit");
    scanf("%f",&m);
    result = fahrenheit(m);
    printf("converting  fahrenheit in to celsius  %.2f",result);
}
float celsiustofahrenheit(float a){
    float result ;
    result =(a*9/5)+32;
}
float fahrenheit(float a){
    float result ;
    result =(a-32)*5/9;
}
