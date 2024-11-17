// wap to determine the largest of 3 number
// inputs num1 num2 num3
// compare num1>=num2 and num1 >=num3 so on...

//how many variables=3
// int data type 




#include<stdio.h>
int main(){
    int n1,n2,n3;
    printf("enter the n1  :");
    scanf("%d",&n1);
    printf("enter the n2  :");
    scanf("%d",&n2);
    printf("enter the n3  :");
    scanf("%d",&n3);

    if(n1>=n2 && n1>=n3){
        printf("n1 is the largest%d",n1);

    }
    else if(n2>=n1 && n2>=n3){
        printf("n2 is the largest%d",n2);
    }
    else if(n3>=n2 && n3>=n1){
        printf("n3 is the largest%d",n3);
    }
    else{
        printf(" the given number is in valid");
    }

}