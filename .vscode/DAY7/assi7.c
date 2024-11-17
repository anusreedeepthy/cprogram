// Assignment 7: Constant Expressions

// Objective: Understand how constants can be used in expressions.

// Write a program that uses constants in calculations, such as calculating the area of a circle using const.


#include <stdio.h>


float const pi =3.14159 ;

int main() {
    const float  pi =3.14159 ;
    float radius, area;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    area = pi * radius * radius;
    printf("The area of the circle with radius %.2f is: %.2f\n", radius, area);

    return 0;
}
