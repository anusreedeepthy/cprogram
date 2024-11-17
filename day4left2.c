#include <stdio.h>
int main() {
    int num = 123;  
    int shift_count = 0; 
    while (num>0) {
        num = num << 1;  
        shift_count++;  
    }
    printf("The number of times  overflow is: %d\n", shift_count);

    return 0;
}
