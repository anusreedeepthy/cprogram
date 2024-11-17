#include<stdio.h>
int main(){
    int num;
    printf("enter the number between 1 to 4");
    scanf("%d",&num);

    switch (num)
    {
    case 1:
       printf("1 Is entered");
        break;
    case 2:
       printf("2 Is entered");
        break;
    case 3:
       printf("3 Is entered");
        break;
    case 4:
       printf("4 Is entered");
        break;
    
    default:
    printf("wrong entery");
        break;
    }
}