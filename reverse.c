#include<stdio.h>
int main(){
    int n,r ,w ,reversed=0;
    printf("enter the number");
    scanf("%d",&n);
     w=n;
    while(n>0){
        r = n%10;
        reversed = reversed * 10 + r;
        // printf("%d",r);
        n=n/10;
    }
    printf("%d",reversed);
    // if (w== reversed)
    // {
    //   printf("the number is palindrome");

    // }
    // else{
    //     printf("the number is not a palindrome");
    // }
    

    return 0;
}
