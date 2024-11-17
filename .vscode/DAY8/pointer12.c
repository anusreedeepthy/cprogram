#include<stdio.h>
float simple(int *,int *,float *);
int main(){
    int salary=1000,year=5;
    float result ,interest=5.5;
    result=simple(&salary,&year,&interest);
    printf("the simple interest  accodinding to %d salary %d year %.2f interest===%.2f",salary,year,interest,result);

}
float simple(int *s,int *y,float*i){
    float inter;
    inter =(*s)*(*y)*(*i)/100;
    return inter;
    

}