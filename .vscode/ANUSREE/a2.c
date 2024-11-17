// Write a program in C to read n number of values in an array and display them in reverse order.
// Test Data :
#include<stdio.h>
int main(){
    int arr[10],n;
    printf("enter the storage");
    scanf("%d",&n);
    printf("enter the element to be stored");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = n-1;i>=0;i--){
        printf("%d",arr[i]);
    }

}