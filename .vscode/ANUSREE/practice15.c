#include<stdio.h>
int main(){
    int n;
    printf("enter the rows");
    scanf("%d",&n);
    int parscel[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(j==0||j==i){
                parscel[i][j]=1;
            }else{
                parscel[i][j]=parscel[i-1][j-1]+parscel[i-1][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int space =n-i;space>=0;space--){
                printf(" ");
            }
            for(int j=0;j<=i;j++){
                printf(" %d",parscel[i][j]);
            }
            printf("\n");
        }
    }
}
