// wap to find the sign of a value
#include<stdio.h>
int main(){
    int n,sign;
    printf("enter the number ");
    scanf("%d",&n);
    if(n<0){
        sign =-1;
    }
    else if (0==n)
    {
        sign = 0;
    }
    else{
        sign =1;

    }
    printf("the sign value  is :%d",sign);
    return 0;
}

// enter the number 11
// the sign value  is :1