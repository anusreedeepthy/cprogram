#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, count = 4; 
    srand(time(NULL));   
    int randomnumber = rand() % 10;  

    while(1){
        printf("enter the number");
        scanf("%d",&n);
        if(n<20 && n>0){
            printf("you have %d tries left\n",count);
            if(n == randomnumber){
                printf("you win the game\n");
                break;
            }
            else if(randomnumber<n){
                printf("the value is high\n");
            }
            else if(randomnumber>n){
                printf("the value is low\n");
            }
            count = count -1;
            
        }
        else{
            printf("the invalid input");
        }
        if(count == 0){
            printf("sorry  you lost");
            printf("the random number is %d",randomnumber);
            break;

        }
    }

   

}
