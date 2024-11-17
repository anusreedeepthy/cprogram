//  Create a program that reverses the elements of an array. Prompt the user to enter values and print both the original and reversed arrays.
#include<stdio.h>
int main(){
    int arr[10],n;
    printf("enter the storage");
    scanf("%d",&n);
    printf("enter the element to be stored");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("the original element\n");
     for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    printf("the reversed element\n");

    for(int i = n-1;i>=0;i--){
        printf("%d",arr[i]);
    }

}