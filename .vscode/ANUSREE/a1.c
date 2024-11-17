// C Array: Exercise-1 with Solution

#include<stdio.h>
int main(){
    int  arr[10];
    printf("enter the array values");
    for(int i=0;i<=10;i++){
        printf("the elements are %d",i);
        scanf("%d",& arr[i]);
    }
    for(int i=0;i<10;i++){
        printf("%d",arr[i]);
    }
}