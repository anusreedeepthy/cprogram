// 1. Write a C program that takes an integer input and divides it by 2^ n using the right shift operator
#include <stdio.h>

int main() {
    int num, n, result;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the value of n: ");
    scanf("%d", &n);
    result = num >> n;
    printf("Result of %d divided by 2^%d is: %d\n", num, n, result);

    return 0;
}