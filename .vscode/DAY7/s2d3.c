#include<stdio.h>
int main(){
    int A[4][4] = {[0][0]=1,[1][1]=1,[2][2]=1,[3][3]=1};
    for(int j=0;j<4;j++){
        for(int k = 0;k<4;k++){
            printf(" %d",A[j][k]);
        }
        printf("\n");
    }
}