#include <stdio.h>

int main() {
    int num, n;

    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("Enter the position to be cleard ");
    scanf("%d", &n);
    int mask = ~(1 << n);
    num = num & mask;
    printf("The result after clearing bit %d is: %d\n", n, num);

    return 0;
}
