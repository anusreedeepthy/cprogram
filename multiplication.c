#include<stdio.h>
int main(){
    int n,i;
    char ch='y';
    while(ch=='Y'||ch=='y')
    {
           printf("enter a number");
    scanf("%d",&n);

    for(i=1;i<=10;i++){
        printf(" %d X %d = %d\n",n,i,n*i);

    }
    printf("do you want to continue(y/N)");
    scanf( " %c",&ch);
       
    }
    
 

    return 0;
}