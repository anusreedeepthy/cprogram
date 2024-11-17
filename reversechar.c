#include<stdio.h>
#include<string.h>
int main(){
    char ch[50] ,fh[50];

    printf("enter the character");
    scanf("%s",&ch);
    for(int i = strlen(ch)-1;i>=0;i--){
        printf("%c",ch[i]);



    }
    // if (ch==fh)
    // {
    //    printf("this is a palindrome");
    // }
    // else{
    //     printf("this is not a palindrome");
    // }
    
   
    return 0;
}