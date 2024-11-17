#include<stdio.h>
void myfun (void);
int main()
{
myfun();
myfun();
myfun();
myfun();
}
void myfun(){
    static int count =0;
    count =count +1;
    printf("the function is executed %d times\n",count);
}