#include<stdio.h>
int main(){
    int A[5];
    printf("enter the element in the array");
    for(int i=0;i<5;i++){
        scanf("%d",&A[i]);
        
    }
    for(int j =0;j<5;j++){
        printf("A[%d]=%d\n",j,A[j]);
    }
    return 0;
}