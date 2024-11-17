// 3. Write a C program that extracts the last n bits from a given integer using the right shift operator.



#include <stdio.h>

int main() {
    int num;  
    int n;             
    int mask; 
   int result; 
    printf("Enter the number: ");
    scanf("%u", &num);
    printf("Enter the number of bits to extract: ");
    scanf("%d", &n);
    mask = (1 << n) - 1; 
    printf("The last %d bits of the number %d are: %d\n", n, num, result);


    return 0;
}


