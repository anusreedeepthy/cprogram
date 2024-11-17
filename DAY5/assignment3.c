// wap to check the year is a leap year or not
#include<stdio.h>
int main(){
    int year;
    printf("enter a Year");
    scanf("%d",&year);
    if((year%4==0 && year%100 != 0)||(year%400==0)){
        printf("the year is a leap year\n");
    }
    printf("execution over");
    return 0;
}

// enter a Year2024
// the year is a leap year
// execution over