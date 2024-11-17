#include<stdio.h>
int main()
{
    int n;
    printf("enter the rows");
    scanf("%d",&n);
    int parcel[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(j==0||j==i){
                parcel[i][j]=1;
            }
            else{
                parcel[i][j]=parcel[i-1][j-1]+parcel[i-1][j];
            }
        }

        for(int i=0;i<n;i++){
            for(int space =n-i;space>=0;space--){
                printf(" ");
            }
            for(int j=0;j<=i;j++){
                printf(" %d",parcel[i][j]);
            }
            printf("\n");
        }
       
    }
}