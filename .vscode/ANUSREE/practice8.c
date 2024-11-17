#include<stdio.h>
int main(){
    int n,m,s,arr[10],arr1[10],arr2[10],temp;
    printf("enter the first array storage");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the storage of the second array");
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<n;i++){
        arr2[i]=arr[i];
    }
    for(int j=0;j<m;j++){
        arr2[j+n]=arr1[j];
       
    }
    s=m+n;
    for(int i=0;i<s;i++){
        for(int j=0;j<s;j++){
            if(arr2[j]<=arr2[j+1]){
                temp= arr2[j+1];
                arr2[j+1]=arr2[j];
                arr2[j]=temp;
            }
        }
        printf("%d",arr2[i]);
    }
}