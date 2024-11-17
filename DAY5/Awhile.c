// 1. WAP to print Fibonacci Series up to a Given Number.
#include<stdio.h>
int main()
{
    int first,second,next,n ,i=0;
    first = 0;
    second = 1;
    printf("enter a number");
    scanf("%d",&n);
    printf("%d\n",first);
  
    while(i<n){
        printf("%d\n",second);
        next = first + second;
        first = second;
        second =next;
        i++;

    }
}

//OUTPUT
// enter a number10
// 0
// 1
// 1
// 2
// 3
// 5
// 8
// 13
// 21
// 34
// 55