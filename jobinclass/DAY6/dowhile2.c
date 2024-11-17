#include<stdio.h>
int main()
{
    int i=1;
    int sumeven = 0;
    int sumodd = 0;
    do{
        if(i%2==0){
            sumeven = sumeven + i;
            // printf("%d\n",i);
        }
        else{
            sumodd = sumodd + i;
             printf("%d\n",i);
        }
        i++;
    }
    while(i<=50);{
        printf("the sum of odd %d",sumodd);
        printf("the sum of even number %d",sumeven);
    }
}