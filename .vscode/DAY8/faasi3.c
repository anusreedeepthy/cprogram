// 3. Develop a C program that calculates the factorial of a number using call by value.
#include <stdio.h>

int swap(int);
int main() {
    int result;
    int n = 5;
    result = swap(n);
    printf("factorial of %d is %d",n,result);

    

    return 0;
}
int swap(int n) {
    int fact =1;
   for(int i =n;i>0;i--){
    fact =fact*i;
   }
   return fact;
}