#include<stdio.h>
int sum(int,int);
int main()
{
    int x=2;
    int y = 3;
    int v = sum(2,3);
    printf("%d",v);
    return 0;
}
int sum(int c,int d){
    static int sum = 0;
    sum = c + d;
    return sum;
}