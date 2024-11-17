// Write a program that to find the maximum element in an array of integers. The program should prompt the user for input and display the maximum value

#include<stdio.h>
int main(){
    int arr[10],n,max;
    printf("enter the storage");
    scanf("%d",&n);
    printf("enter the element to be stored");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    printf("the maximum value is %d",max);

}