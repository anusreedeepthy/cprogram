#include<stdio.h>
#include<string.h>
int main()
{
char name[50],name1[50];
printf("enter the name");
scanf("%s",name);
int length = strlen(name);
for(int i = 0; i < length; i++)
    {
        name1[i] = name[length - i - 1];
    }
if(strcmp(name,name1)==0){
    printf("the given string is palindrome ");
}
else{
    printf("the given string is not palindrome ");
}


    return 0;
}