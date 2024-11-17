#include<stdio.h>
int main(){
    char c ;
    printf("enter the character : ");
    scanf("%c",&c);
    if(c>='a'&& c<='z'){
        printf("the given charcter  is lower case");
    }
    else if(c>='A'&& c<='Z'){
        printf("the given character is a upper case");
    }
    else{
        printf("this is not a character");
    }
}