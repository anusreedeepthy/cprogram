//  Write a program in C to find the maximum and minimum elements in an array.
#include<stdio.h>
int main(){
    int n,arr[10];
    printf("enter the array storage");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max;
    max= arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
            printf("the largest value is %d",max);

}