#include<stdio.h>
int main(){
    int A[5];
    printf("size of the int %d\n",sizeof(int));
    printf("size of the array A =%d\n",sizeof(A));
    printf("A = %p\n",A); // address of array in first index
    for(int i=0;i<=4;i++){
        printf("A = %p\n",A+i); 
        //(A+i)= base address of array + (index value * size of the data)
    }
}