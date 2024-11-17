#include <stdio.h>

unsigned int circularLeftShift(unsigned int num, int n) {
    int numBits = sizeof(num) * 8; // Calculate the number of bits in the integer (typically 32 bits)
    
    // Perform the circular left shift by n positions
    return (num << n) | (num >> (numBits - n));
}

int main() {
    unsigned int num;
    int n;

    // Input: integer and number of positions to shift
    printf("Enter an integer: ");
    scanf("%u", &num);

    printf("Enter the number of positions to shift: ");
    scanf("%d", &n);

    // Perform circular left shift
    unsigned int shiftedNum = circularLeftShift(num, n);

    // Output: the result after the circular left shift
    printf("Original number: 0x%X\n", num);
    printf("After circular left shift by %d positions: 0x%X\n", n, shiftedNum);

    return 0;
}
