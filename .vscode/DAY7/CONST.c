#include<stdio.h>


int main(){
    int const a =50;
    printf("001 a =%d\n",a);
    int * p;
    p= &a;
    *p=80;
    printf("002 a =%d\n",a);

}