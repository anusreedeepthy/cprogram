#include<stdio.h>
int main(){
    int arr[10] = {0,1,4,9,16};
    int i;
    for(i=1;i<3;i++){
        arr[i]=i*i;
    }
    for(i=0;i<10;i++){
        printf("%d = ",arr[i]);
    }
}