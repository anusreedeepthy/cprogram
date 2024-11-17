// #include <stdio.h>

// unsigned int reverseBits(unsigned int num) {
//     unsigned int reversed = 0;
    
//     for (int i = 0; i < 32; i++) {
//         reversed = reversed << 1;

//         reversed = reversed | (num & 1);

//         num = num >> 1;
//     }
    
//     return reversed;
// }

// int main() {
//     unsigned int num;

//     printf("Enter an integer: ");
//     scanf("%u", &num);

//     unsigned int reversed = reverseBits(num);

//     printf("Original number in binary: ");
//     for (int i = 31; i >= 0; i--) {
//         printf("%d", (num >> i) & 1);
//     }

//     printf("\nReversed number in binary: ");
//     for (int i = 31; i >= 0; i--) {
//         printf("%d", (reversed >> i) & 1);
//     }

//     printf("\nReversed number in hexadecimal: 0x%X\n", reversed);

//     return 0;
// }
