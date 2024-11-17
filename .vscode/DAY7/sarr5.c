#include<stdio.h>
# define month 12
int main(){
    int day[month]={31,[1]=29,[4]=31,30,31,30,31,30,31,30,};

    int i;
    for(i=0;i<month;i++){
        printf("[%d]  %d\n",  i+1,day[i]);
    }


}