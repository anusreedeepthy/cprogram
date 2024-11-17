#include<stdio.h>
int main(){
    
     int temp[10],sum =0, average =0;
     printf("enter the grades");
     for(int i=0;i<10;i++){
        scanf("%d",&temp[i]);
        sum = sum +temp[i];
     }
     average =sum /10;
     printf("the sum is %d",sum);
     printf("the value of average is %d",average);

}