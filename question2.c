// 2. Swapping Variables
// Question: Create a program that swaps the values of two integer variables without using a temporary variable. Demonstrate this by printing the values before and after the swap.
#include<stdio.h>
int main(){
    int n =42,v=33;
    printf("the value  n: %d v: %d\n ",n,v);
    n = n + v;
    v = n-v;
    n = n - v; 
    printf("the value  n: %d  v:%d ",n,v);

return 0;
}