// Write a C program that prompts the user to input a series of integers until the user stops by entering 0 using a do-while loop. Calculate and print the sum of all positive integers entered.

#include<stdio.h>
int main(){
    int sum=0,num;
    do
    {
        printf("enter the number");
    scanf("%d",&num);

    if(num>0){
        sum=sum + num;

    }
    else if(num<0){
        printf("the number is a negative number");

    }
    }
     while (num!=0);
    {
        printf("the sum of positive integers %d",sum);
    }


}