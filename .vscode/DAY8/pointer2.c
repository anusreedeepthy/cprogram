#include<stdio.h>
int main(){
    int count =10,x;
    int *pcount = &count;
    x=*pcount;

    printf("count =%d, x=%d",count,x);
    printf("address of pcount =%p",&pcount);
    printf("size of pcount %d",sizeof(pcount));
    
}