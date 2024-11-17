#include<stdio.h>
int main(){
    int number =0;
    int *pnumber=NULL;
    number=10;
    printf("numbers address :%p\n",&number);
    printf("number value :%d\n",number);
    pnumber=&number;
    printf("pnumbers address:%p\n",&pnumber);
    printf("pnumber size :%d bytes\n",sizeof(pnumber));
    printf("pnumber value:%p\n",pnumber);
    printf("value pointer to :%d\n",*pnumber);
    return 0;
}