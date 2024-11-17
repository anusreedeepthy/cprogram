// pass by reference
#include<stdio.h>
int add(int *,int*);
int main(){
    int a=20,b=30;
    printf("001 a=%d,b=%d\n",a,b);
    int sum=add(&a,&b); //call by reference
    printf("002 a=%d,b=%d\n",a,b);
    printf("the sum =%d\n",sum);
    return 0;
}
int add(int *a,int *b){
    *a=30;
    *b=40;
    int s=*a+*b; //passing the values
    return s;
}