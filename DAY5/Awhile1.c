// 2. WAP to print factorial of a number.
#include<stdio.h>
int main(){
    int n,fact=1;
    printf("enter the number");
    scanf("%d",&n);
    int v = n;
    while(0<n){
        fact = fact * n;
        n--;

    }
    printf("factorial of a number is %d ! =%d",v,fact);
}
// output
// enter the number4
// factorial of a number is 4 ! =24