#include<stdio.h>
int swap(int *, int *);
int main(){
    int a=30,b=40,new;
    printf("the value before swapping a:%d, b:%d\n",a,b);
    new=swap(&a,&b);
    printf("the swaped value a: %d,b: %d\n",a,b);
}
int swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;

}