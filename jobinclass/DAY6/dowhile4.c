// 6. Write a C program that prompts the user to enter a positive integer and then calculates and prints the sum of the squares of each digit in that number using a do-while loop

#include<stdio.h>
int main(){
    int n,sum=0;
    do{
       printf("enter the number (enter zero to solve)");   
       scanf("%d",&n);
       if(n>0){
        n= n*n;
        sum = sum + n;
        printf("%d\n",n);
       }
       else if(n<0){
        printf("negative number is not considered");

       }
    }
    while (n!=0);
    {
        printf("the sum od positive integers %d",sum);
    }
    
}