// #include<stdio.h>
// int add(int,int);
// int main(){
//     int n,m,total;
//     printf("enter a number");
//     scanf("%d",&n);
//     printf("enter a number");
//     scanf("%d",&m);
//     total= add(n,m);
//     printf("%d",total);
//     return 0;
// }
// int add(int a,int b){
//     int v;
//     v=a+b;
//     return v;
    
// }




// #include<stdio.h>
// void add (void);
// int main(){
//     add();
//     return 0;
// }
// void add(){
//    int a=10,b=20,sum=0;
//    sum=a+b;
//    printf("%d",sum);
    
// }



#include<stdio.h>
void add (int,int);
int main(){
    int a=10,b=20;
    add(a,b);
    return 0;
}
void add(int c,int d){
   int sum =0;
   sum=c+d;
   printf("%d",sum);
    
}