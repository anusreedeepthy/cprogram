#include<stdio.h>
int main(){
    int n;
    printf("enter the number ");
    scanf("%d",&n);
    if(0==n%2){
        printf("enter the number is even\n");
    }
    else{
        printf("the number is odd");
    }
}