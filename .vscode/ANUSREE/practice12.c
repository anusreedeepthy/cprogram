// ascending order


#include<stdio.h>
int main(){
    int n, arr1[10],temp;
    printf("enter the storage");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr1[j]>arr1[j+1]){
                temp = arr1[j+1];
                arr1[j+1]=arr1[j];
                arr1[j]=temp;

            }
        }
    }
    for( int i=0;i<n;i++){
        printf("%d",arr1[i]);
    }
}