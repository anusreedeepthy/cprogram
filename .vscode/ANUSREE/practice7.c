#include<stdio.h>
int main(){
    int n,arr[10] ,count;
    printf("enter the total number of storage");
    scanf("%d",&n);
    printf("the numbers are");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
    count =0;
       for(int j=0;j<n;j++){
        if(i!=j){
           if(arr[i]==arr[j]){
            count++;
           }
        }
         }
        if(count ==0){
            printf(" the num%d\n",arr[i]);
        }
      


        }
                       
    }
