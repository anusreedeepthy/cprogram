#include<stdio.h>
int main(){
    int A=10;
    printf("001A=%d\n",A);
    int *PA = &A;
    A=*PA + 5;
    printf("002A=%d",A);

}