// leap year or not
#include<stdio.h>
int main(){
    int n;
    printf("enter a year");
    scanf("%d",&n);
    if((n%4==0 && n%100!=0)||(n%400==0)){
        printf("the year is a leap year %d",n);
    }
    else{
        printf("the year is not a leap year");
    }
}