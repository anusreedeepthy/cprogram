// count

#include<stdio.h>
int main(){
    int n,arr[10],count;
    printf("enter the storage");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }


    for(int i=0;i<n;i++){
        count =1;
        if(arr[i]!=-1){
            for(int j=i+1;j<n;j++){
                if(arr[i]==arr[j]){
                    count++;
                    arr[j]=-1;
                }

            }
                    printf("%d times %d\n",arr[i],count);

        }
    }
}