// #include<stdio.h>
// int main(){
//     int n=2,sum=0;
//    for(int i =0;i<n;i++){
//     printf("enter the number");
//     scanf("%d",&n);
//     if(n%2==0){
//         sum = sum + n;
//     }
//    }
//    printf("the sum is %d",sum);
// }

#include <stdio.h>

int main() {
    int n, sum = 0;
    
   printf("enter up to 20 integers(enter -1 to stop)");
   for(int i =0;i<=20;i++){
    scanf("%d",&n);
    if (n==-1)
    {
       break;
    }
    else if (n<0)
    {
        continue;
        
    }
    else if (n%2==0)
    {
      sum = sum+n;  
    }
    
   }
   printf("the sum of even numbers are =%d",sum);
   return 0;
}
