// Write a program in C to count the total number of duplicate elements in an array.
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
      count =1;
        if(arr[i]!=-1){
            for(int j=0;j<i;j++)
            {
            if(arr[i]==arr[j])
            {
                count++;
                arr[j]=-1;
                
                
               
                
            }
            
        }
 printf("the duplicated number is %d  %d",arr[i],count);


        }
                       
    }
}