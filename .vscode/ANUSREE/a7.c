// sorting
#include<stdio.h>
int main(){
    int n,m,i,v,temp[100];
    int arr1[100],arr2[100],arr3[100];
    printf("enter the elemet");
    scanf("%d",&n);
    printf("enter the elemet");
    scanf("%d",&m);
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    printf("enter the values in array 2");
    for(int i=0;i<m;i++){
        scanf("%d",&arr2[i]);
    }
    for(int i=0;i<n;i++){
        arr3[i]=arr1[i];
    }
    for(int j=0;j<m;j++){
        arr3[j+n]=arr2[j];
       
    }
    v =n+m;
    for(int i=0;i<v;i++){
        for(int j=0;j<v-1;j++){
            if(arr3[j]<=arr3[j+1]){
                temp[j]=arr3[j+1];
                arr3[j+1]=arr3[j];
                arr3[j]=temp[j];

            }
        }
    }
    for(int i=0;i<v;i++){
        printf("%d",arr3[i]);
    }
}