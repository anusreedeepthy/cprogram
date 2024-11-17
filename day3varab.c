#include<stdio.h>
void fun(void);
int main(){

fun();
fun();
fun();
fun();

}
void fun(){
    static int counter =0;
    counter = counter + 1;
    printf("the value is %d\n",counter);
    
}