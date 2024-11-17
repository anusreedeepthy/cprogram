#include<stdio.h>
int main(){
    int A[4][5] = {[3] =45};
    for(int j=0;j<4;j++){
        for(int k = 0;k<5;k++){
            printf("A[%d][%d] = %p\n",j,k,(A+j+k));
        }
    }
}