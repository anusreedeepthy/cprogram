#include<stdio.h>
void TestFile_myfun(void);
int mainPrivatedata;
int main(){

    mainPrivatedata=100;

    printf("001 main private data %d",mainPrivatedata);

    TestFile_myfun();
    
    printf("002 main private data %d",mainPrivatedata);

    return 0;
}