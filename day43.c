#include <stdio.h>

int main() {
    int num, n;

    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("Enter the position : ");
    scanf("%d", &n);
    num = num | (1 << n);

    printf("The result after setting bit %d is: %d\n", n, num);

    return 0;
}
