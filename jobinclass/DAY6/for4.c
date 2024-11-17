#include<stdio.h>
int main(){
    int first ,second, next,n;
    first =0;
    second =1;
    printf("enter the number");
    scanf("%d",&n);
    printf("%d\n",first);
    for(int i = 0;i< n; i++){

        
        if(second>=n){
            break;
        }
        else{
        printf("%d\n",second);
        next = first + second;
        first = second;
        second= next;
        }
       
       
    }
}