#include<stdio.h>
int main(){
    int n,sum =0;
    printf("enter the natural number");
    scanf("%d",&n);
    for(int i =1;i<=n;i++){
        sum = sum + i;
    }
    printf("the sum of natural numbers are%d",sum);
    return 0;
}