#include<stdio.h>
int main(){
    int i,j,yearlyaverage[50]={0},averagemonth[50]={0},rainfall[5][12];
    int years[5] = {2010, 2011, 2012, 2013, 2014}; 
    char *months[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

 
    for(i=0;i<5;i++){
        for(j=0;j<12;j++){
            scanf("%d",&rainfall[i][j]);
            yearlyaverage[i]=yearlyaverage[i]+rainfall[i][j];

        }
        yearlyaverage[i]=yearlyaverage[i]/12;
    }
    for(i=0;i<5;i++){
        printf("yearly average %d  year %d\n",years[i],yearlyaverage[i]);
    }

    //monthly average
    for(i=0;i<12;i++){
        for(j=0;j<5;j++){
            averagemonth[i]=averagemonth[i]+rainfall[i][j];
        }
        averagemonth[i]=averagemonth[i]/5;
    }
    
    for(i=0;i<12;i++){
        printf("the average monthly of  %s      %d  \n", months[i],  averagemonth[i]);
    }

}
