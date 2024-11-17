

#include<stdio.h>
int add (int,int);
int main(){
    int a=10,b=20,sum;
    sum = add(a,b);
    printf("the sum is %d",sum);
    return 0;
}
int add(int a,int b){
    int sum;
    sum= a+b;
    return sum;
     
    
}