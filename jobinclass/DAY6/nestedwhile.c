//  w a p to print the multiplication table from 1 to 10
#include<stdio.h>
int main(){
    int i=1,j;
    while(i<=10){
        j=1;
        while(j<=10){
            printf("%d X %d = %d\n",i,j ,i*j);
            j++;
        }
        i++;
    }
}