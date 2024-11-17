// how does it create a bitmask with the first n bits set to 1?


#include <stdio.h>

int main() {
    int n, bitmask;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    bitmask = (1 << n) - 1;  
    printf("Bitmask with the first %d bits set to 1 is: 0x%X\n", n, bitmask);
    return 0;
}
