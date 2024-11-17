// 1. Create a C program that defines a function to increment an integer by 1. The function should demonstrate call by value, showing that the original value remains unchanged.


#include<stdio.h>
int increment(int);
int main(){
    int n=5,val=0;
    printf("the value od v is %d\n",n);
    val= increment(n);
    printf("the incremented value is %d\n",val);
    return 0;

}
int increment (int v){
    v=v+1;
    return v;
    


}