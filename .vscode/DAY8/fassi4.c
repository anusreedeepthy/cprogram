// 4. Create a C program that defines a function to find the maximum of two numbers using call by value.

#include<stdio.h>
int maxvalue (int ,int);
int main(){
    int n=3,m=7,max;
    max = maxvalue(n,m);
    printf("the heighest value is %d",max);

}
int maxvalue (int a,int b){
    if(a>b){
        return a;
    }else{
        return b;
    }

}