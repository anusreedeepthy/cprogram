#include<stdio.h>
int main(){
 int a;
 int *p;
 p=&a;
 *p = 20;
 printf("a=%d\n",a);
 printf("address of a = %p\n",&a);
 printf("address of *p=%p\n",&p);
 printf("*p = %p\n",p);

    return 0;
}