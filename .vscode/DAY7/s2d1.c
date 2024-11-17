#include<stdio.h>
int main(){
    int A[4][5] = {{1,2,3},
    {6,7,8,9,10},
    {11,12,13,14,15},
    {16,17,18,19,20}};
    for(int j=0;j<4;j++){
        for(int k = 0;k<5;k++){
            printf(" %d",A[j][k]);
        }
        printf("\n");
    }
}