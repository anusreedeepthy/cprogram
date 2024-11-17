// wap to determine the largest of 3 number
// inputs n1 as mark
// compare >= <= >
//how many variables =1
// int data type 



#include<stdio.h>
int main(){
    int n1,n2,n3;
    printf("enter the n1  :");
    scanf("%d",&n1);
    
if(n1>=0){
    if(n1>=90){
        printf("the student got A grade");

    }
    else if(n1>=80 && n1<=90){
        printf("the student got B grade");
    }
    else if(n1>=70 && n1<=80){
        printf("the student got c grade");
    }
    else if(n1>=60 && n1<=70){
        printf("the student got D grade");
    }
    else if(n1<60){
        printf("the student got F grade");
    }
}
else{
    printf(" this is not valid mark");
}
    }

