// Write a C program that swaps the values of two integers using pointers.

#include<stdio.h>
int main(){
    int num1,num2,temp;
    int *ptr1;
    int *ptr2;
    num1=20;
    num2=30;
    printf("the values before swaping  num1 :%d  num2:%d\n",num1,num2);
    ptr1 = &num1;
    ptr2 = &num2;

    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;

    printf("the value after swaping num1 :%d num2: %d\n",num1,num2);
    


}