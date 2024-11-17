#include<stdio.h>
int main(){
    int  reverece=0 ,n,num;
    printf("enter the number");
    scanf("%d",&num);
    int v= num;
    while(num>0){
        n=num%10;
        reverece = reverece * 10 +n;
        num = num/10;
    }
    printf("%d",reverece);
    if(v == reverece){
        printf("this is a palindrome ");

    }
    else{
        printf("this is not a palindrome");
    }
}