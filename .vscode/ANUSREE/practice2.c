// Write a program in C to find the sum of all elements of the array.
// input 1,2,3 output =6
#include<stdio.h>
int main(){
    int n,arr[10],sum=0;
    printf("enter the stored number\n");
    scanf("%d",&n);
    printf("enter the numbers to been stored\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf(" the numbers are\n");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("the sum of numbers\n");
    for(int i=0;i<n;i++)
{
            sum = sum + arr[i];

}  
printf("the sum is %d\n",sum);  
}