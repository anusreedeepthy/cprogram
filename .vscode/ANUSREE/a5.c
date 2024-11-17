// duplication of a number

#include<stdio.h>
int main(){
    int n;
    int arr[10],arr1[10];
    printf("finding duplicatin of a number");
    scanf("%d",&n);
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){

                // arr1[i]=arr[j];
                printf("the duplicared %d",arr[i]);
            }
        }
    }
}