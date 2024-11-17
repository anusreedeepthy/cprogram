// unique element in the c
#include<stdio.h>
int main(){
    int n;
    int arr[10],ctr;
    printf("the unique element in c  is");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        ctr =0;
        for(int j=0;j<n;j++){
            if(i !=j){
                if(arr[i]==arr[j]){
                    ctr ++;
                }
            }
           
                
            }
            if(ctr ==0){
                printf("%d",arr[i]);
            }
        }
    }
