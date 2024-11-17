#include<stdio.h>
int main(){
    int sum=0,k=0,total,rainfall[5][12];
    float monthAverage[10]={0},yearAverage[10]={0};
    int years[5] = {2010, 2011, 2012, 2013, 2014}; 
    char *months[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    for(int i=0;i<5;i++){
        for(int j=0;j<12;j++){
            scanf("%d",&rainfall[i][j]);
            sum =sum +rainfall[i][j];
        }
        yearAverage[i]=sum/12;
        sum = 0;
    }
    for(int i=0;i<5;i++)
    {
        printf("%d\t %f\n",years[i],yearAverage[i]);
        total = total+yearAverage[i];
    }
    total = total/5;
    printf("the yearly average is %d",total);

    // monthly Average 
    for(int j=0;j<12;j++){
        for(int i=0;i<5;i++){
            monthAverage[j]=monthAverage[j]+rainfall[i][j];
    }
        monthAverage[j]=monthAverage[j]/5;
    }
    for(int i=0;i<12;i++){
        printf("\n%s\t %f",months[i],monthAverage[i]);
        
    }
}