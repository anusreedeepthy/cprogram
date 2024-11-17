// . Create a C program that counts how many times you can right shift a number before it becomes zero.



#include <stdio.h>

int main() {
    int num;   
    int count = 0;      
    printf("Enter a number: ");
    scanf("%u", &num);  
    while (num > 0) {
        num = num >> 1;  
        count++;          
    }
    printf("The number of count is: %d\n", count);

    return 0;
}


