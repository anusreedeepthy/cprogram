#include<stdio.h>
int main(){
    int n=3;
    int ar[n][n];
    for(int i=0;i<3;i++){
      for(int j=0;j<3;j++){
          scanf("%d",&ar[i][j]);
      }
    }
      for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
         printf("%d->",ar[i][j]);
       }
    }
}