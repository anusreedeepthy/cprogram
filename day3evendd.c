#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    if (n & 1) {
        printf(" number is an odd number.\n");
    } else {
        printf(" number is an even number.\n");
    }
    return 0;
}
