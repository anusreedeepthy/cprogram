#include <stdio.h>

int main() {
    int num = 1234; 
    int set_mask = (1 << 4) | (1 << 6); 
    int clear_mask = ~((1 << 3) | (1 << 9) | (1 << 12)); 
    num = num | set_mask; 
    num = num & clear_mask;
    printf("Final value in hexadecimal: 0x%X\n", num);

    return 0;
}
