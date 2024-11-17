// 3. WAP to check whether the number is Prime or not.
#include<stdio.h>
#include<math.h>

int main(){
    int isprime = 1; 
    int n, i = 2;
        printf("Enter the number: ");
    scanf("%d", &n);
   
        while (i <= n/2) {
            if (n % i == 0) {
                isprime = 0; 
                break;
            }
            i++;
        }
    
    if (isprime == 1) {
        printf("The number is prime\n");
    } else {
        printf("The number is not prime\n");
    }

    return 0;
}
// Enter the number: 
// 7
// The number is prime
