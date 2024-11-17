#include<stdio.h>
int main(){
    int n1,n2,c;
    char op;
    float v ;
     printf(" enter the expresion");
    scanf("%c",&op);
    printf("enter the number ");
    scanf("%d",&n1);
    printf("enter the second number");
    scanf("%d",&n2);
   
    switch (op)
    {
    case '+':
       c=n1+n2;
       printf("%d + %d = %d",n1,n2,c);
        break;
    case '-':
       c=n1-n2;
       printf("%d - %d = %d",n1,n2,c);
        break;
        case '*':
       c=n1*n2;
       printf("%d * %d = %d",n1,n2,c);
        break;
        case '/':
       v=n1/n2;
       printf("%d / %d = %f",n1,n2,v);
        break;
    
    default:
    printf("the given number is not valid");
        break;
    }



    return 0;
}