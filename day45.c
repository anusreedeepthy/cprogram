#include <stdio.h>

int main() {
    int num, n;

    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("Enter the bit position to toggle ");
    scanf("%d", &n);
    int mask = 1 << n;
    num = num ^ mask;
    printf("The result after toggling bit %d is: %d\n", n, num);
    return 0;
}
