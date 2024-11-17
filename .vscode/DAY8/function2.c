

#include<stdio.h>
void add (int,int);
int main(){
    int a=10,b=20;
    printf("001a=%p\n",&a);
    printf("001b=%p\n",&b);
    add(a,b);
    printf("the value of a and b is %d,%d",a,b);
    return 0;
}
void add(int a,int b){
     a=50;
     b=70;
     printf("002a=%p\n",&a);
     printf("001b=%p\n",&b);
   int sum =0;
   sum=a+b;
   printf("%d",sum);
    
}