// Write a program in C to copy the elements of one array into another array.

#include<stdio.h>
int main(){
    int n;
    int arr[10];
    int arr1[10];
    printf("coppieing an element");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        arr1[i]=arr[i];
    }
    printf("the copied element from arr[i] in the arr1[i]");
    for(int i=0;i<n;i++){
        printf(" %d",arr1[i]);
    }
}