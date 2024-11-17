#include<stdio.h>
int main(){
    long num1 =0;
    long num2 =0;
    long *pnum=NULL;

    pnum = &num1;
    *pnum = 2;
    ++num2;
    num2 += *pnum;

    pnum = &num2;
    ++*pnum;
    printf("num1=%1d num2=%1d *pnum=%1d *pnum +num2=%1d\n",num1,num2,*pnum,*pnum +num2);
}