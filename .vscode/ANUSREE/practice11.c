//Write a program in C to separate odd and even integers into separate arrays.
#include<stdio.h>
int main(){
    int n,arr1[10],arr2[10],arr3[10],k=0,j=0;
    printf("enter the storage");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<n;i++){
        if(arr1[i]%2==0){
            arr2[k]=arr1[i];
            k++;
        }
        else{
            arr3[j]=arr1[i];
            j++;
        }
       
    }
    for(int i=0;i<k;i++){
        printf("%d even number\n",arr2[i]);
    }
    for(int i=0;i<j;i++){
        printf("%d odd number\n",arr3[i]);
    }
}