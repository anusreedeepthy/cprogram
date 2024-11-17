// #include<stdio.h>
// int main()
// {
//     int isprime;
//     for(int i=2;i<100;i++){
//         isprime=1;
//         for(int j=0;j<i/2;j++){
//             if(i%j==0){
//                 isprime=0;

//             }
//         }
//         if(isprime==1){
//             printf("the number is %d",i);
//         }
//     }

// }

#include <stdio.h>

int main() {
    int count=0, array[100]={2,3},k=2 ;
    for(int i=4;i<=100;i++){
        for (int j=1;j<=i;j++){
            if(i%j==0)
            {
                count++;
            }
        }
        if(count<=2){
            array[k++]=i;
        }
        count=0;
    }
    for(int i=0;i<k;i++){
        printf("%d\n",array[i]);
    }

    return 0;
}