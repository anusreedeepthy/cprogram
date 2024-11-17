// Write a program in C to copy the elements of one array into another array.
#include<stdio.h>
int main(){
    int n,arr1[10],arr2[10];
    printf("enter the number of element to stored");
    scanf("%d",&n);
    printf("the element to been stored");
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d",arr1[i]);
    }
    for(int i=0;i<n;i++){
        arr2[i]=arr1[i];
    }
    for(int i=0;i<n;i++){
        printf("%d",arr2[i]);
    }
}