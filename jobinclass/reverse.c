#include<stdio.h>
#include<string.h>
int main(){
    char name[50];
    printf("enter the character : ");
    scanf("%s",name);
    for(int i = strlen(name)-1;i>=0;i--){
        printf("%c",name[i]);
    }



    return 0;
}