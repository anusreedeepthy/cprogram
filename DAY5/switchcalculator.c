# include<stdio.h>
int main(){
    int num1,num2,result;
    char op;
    printf("enter the number1 ");
    scanf("%d",&num1);
    printf("enter the second number ");
    scanf("%d",&num2);
    printf("enter the operator to perform ");
    scanf(" %c",&op);

    switch (op)
    {
    case '+':
        result = num1+num2;
        printf("the result is %d",result);
        break;
    case '-':
        result = num1-num2;
        printf("the result is %d",result);
        break;
    case '*':
        result = num1*num2;
        printf("the result is %d",result);
        break;
    case '/':
        if (num2 == 0 ) {
        printf(" num2 is 0");
    } else {
        result = num1 / num2;
        printf("The result is %d\n", result);
    }
        break;
    case '%':
        result = num1%num2;
        printf("the result is %d",result);
        break;
    
    
    default:
    printf("the number is not valid");
        break;
    }
}