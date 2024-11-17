// WAP for Finding the Cube of a Number Using Pass by Reference

#include<stdio.h>
int cube(int*);
int main(){
    int n=3,result;
    result = cube(&n);
    printf("the cube of the value %d is %d",n,result);


}
int cube(int *a){
    int v;
    v= (*a)*(*a)*(*a);
    return v;

}