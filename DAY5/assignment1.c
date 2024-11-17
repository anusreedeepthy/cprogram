// wap to check wheather  a triangle is valid 

#include<stdio.h>
int main(){
    int n,m,o;
    printf("enter the first side\n");
    scanf("%d",&n);
    printf("enter the second side\n");
    scanf("%d",&m);
    printf("enter the third side\n");
    scanf("%d",&o);
    if(m+n>o&&n+o>m&&o+m>n){
        printf("the triangle is valid\n");
    }
printf("execution is over");
return 0;
}
// enter the first side
// 3
// enter the second side
// 2
// enter the third side
// 4
// the triangle is valid
// execution is over