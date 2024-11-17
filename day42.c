// 2. Create a C program that retrieves the value of the nth bit from a given integer.


#include <stdio.h>

int main() {
    int num, n;

    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("Enter the bit position to  ");
    scanf("%d", &n);
    int Value = (num >> n) & 1;   
    printf("The value of bit %d is: %d\n", n, Value);

    return 0;
}
//1100
//2
//0100
// 0100  4