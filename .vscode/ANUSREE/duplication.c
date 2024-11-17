// 123341
// 24
#include<stdio.h>
int main(){

    int n,arr[10],arr1[10];
    printf("enter the number stored");
    scanf("%d",&n);
    printf("the numbers");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("the numbers entered");
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
                arr1[i]=arr[i];
                printf("the number is %d",arr1[i]);
            }
        }
    }
}