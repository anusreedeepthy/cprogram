// Develop a C program that uses the right shift operator to create a bitmask that checks if specific bits are set in an integer.


#include <stdio.h>

int main() {
    unsigned int num;  
    int bitPos;        
    unsigned int bitmask; 

    printf("Enter the number: ");
    scanf("%u", &num);
    printf("Enter the bit position to check: ");
    scanf("%d", &bitPos);
    bitmask = 1 << bitPos;
    unsigned int shiftedNum = num >> bitPos;
    if (shiftedNum & 1) {
        printf("The bit at position %d is set (1).\n", bitPos);
    } else {
        printf("The bit at position %d is not set (0).\n", bitPos);
    }

    return 0;
}


