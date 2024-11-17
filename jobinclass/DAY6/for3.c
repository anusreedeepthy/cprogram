#include<stdio.h>
int main(){
    int n,r,reverse=0;
    printf("enter the number to be reversed");
    scanf("%d",&n);
    for(;n!=0;){
        r = n%10;
        reverse  = reverse * 10 +r;
        n = n/10;
    }
    printf("the reverse of a number is %d",reverse);
    
}