// Write a program in C to find the sum of all elements of the array.
// Test Data :

#include<stdio.h>
int main(){
    int n;
    int arr[10],sum =0;
    printf("enter the number of values");
    scanf("%d",&n);
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }
    for(int i =0;i<n;i++){
        printf("%d\n",arr[i]);

    }
    printf("%d the sum ",sum);
}