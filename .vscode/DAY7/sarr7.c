#include <stdio.h>

int main() {
    int primes[100] = {2, 3};  
    int count = 2;              
    int isPrime;

    for (int i = 4; i <= 100; i++) {
        isPrime = 1; 
        for (int j = 0; j < count; j++) {
            if (i % primes[j] == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime==1) {
            primes[count] = i;
            count++;
        }
       
    }
    for (int i = 0; i < count; i++) {
        printf("%d ", primes[i]);
    }
    printf("\n");

    return 0;
}

