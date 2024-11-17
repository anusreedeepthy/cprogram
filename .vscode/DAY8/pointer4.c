#include<stdio.h>
int main(){
    char ch =100,ch2;
    char *pch;
    pch = &ch;
    

    printf("%p\n",ch);
    printf("%d\n",*pch);
    ch2 = *pch;
    printf("%d\n",ch2);
   *pch =65;
   printf("%d",ch);

}