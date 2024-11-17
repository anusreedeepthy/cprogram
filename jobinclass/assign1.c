#include<stdio.h>
int main(){
    int cm,feat,r;
    float inch;
    printf("enter the number");
    scanf("%d",&cm);
    r = cm%30; // 100%30 =10
    inch = r * 0.4; // 10*0.4=4
    cm = cm - r; // 100 -10 =90
    feat =cm / 30; // 90/30
    printf("the given cm is converted into %d %f",feat,inch);


}