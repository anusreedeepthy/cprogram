// Write a program in C to read n number of values in an array and display them in reverse order.

//input = 1234   output =4321
#include<stdio.h>
int main(){
    int n,arr[10];
    printf("enter the number to be stored");
    scanf("%d",&n);
    printf("the numbers are");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("the original numbers are\n" );
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    printf("the reverse of a number is\n");
    for(int i=n-1;i>=0;i--){
        printf("%d",arr[i]);
    }

}