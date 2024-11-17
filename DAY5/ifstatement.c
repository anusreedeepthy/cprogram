#include<stdio.h>
int main(){
    int score =80;
    int big = 75;
    if(score > big){
        printf("score is greater than big\n");
        if (score>big){
            score++;
            printf("the score is greater than %d",score);
        }
    }
    else{

    }
}
// score is greater than big
// the score is greater than 81