#include<stdio.h>
int main()
{
    int count = 0,arr[100] ,k=0;
    for(int i=2;i<=100;i++){
        for(int j=1;j<=i;j++){
            if(i%j==0){
                count ++;
            }
        }
        if(count<=2){
            arr[k++]=i;
          
        }
        count = 0;
        
    }
    for(int i=0;i<k;i++){
            printf("%d \n",arr[i]);
        }
}