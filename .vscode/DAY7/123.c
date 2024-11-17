// #include <stdio.h>

// int main() {
//     float rainfall[5][12] = {
//         {3.4, 4.2, 5.3, 2.9, 3.5, 2.1, 0.5, 3.3, 2.9, 1.2, 2.6, 0.9},
//         {3.9, 4.0, 6.1, 3.3, 2.7, 1.1, 0.8, 2.5, 2.6, 1.5, 2.7, 1.7},
//         {5.1, 6.4, 4.3, 3.2, 3.6, 0.5, 1.4, 4.3, 3.1, 1.0, 2.9, 3.0},
//         {4.0, 5.2, 5.9, 3.1, 2.2, 0.4, 0.6, 3.5, 3.3, 2.1, 1.8, 2.9},
//         {4.2, 3.8, 5.7, 3.6, 3.1, 1.2, 1.0, 2.4, 2.9, 2.2, 3.0, 0.8}
//     };
    
//     int years[5] = {2010, 2011, 2012, 2013, 2014};  
    
//     float yearly_total[5] = {0};  
//     float total_rainfall = 0;  
//     float monthly_avg[12] = {0}; 

//     for (int i = 0; i < 5; i++) {
//         float sum = 0;
//         for (int j = 0; j < 12; j++) {
//             sum += rainfall[i][j];
//             monthly_avg[j] += rainfall[i][j]; 
//         }
//         yearly_total[i] = sum;
//         total_rainfall += sum;
//     }

//     float yearly_average = total_rainfall / 5.0;

   
//     for (int j = 0; j < 12; j++) {
//         monthly_avg[j] /= 5.0;
//     }

//     printf("YEAR    RAINFALL \n");
//     for (int i = 0; i < 5; i++) {
//         printf("%d    %.1f\n", years[i], yearly_total[i]);
//     }
//     printf("\nThe yearly average is %.1f inches.\n", yearly_average);
//     printf("\nMONTHLY AVERAGES:\n");
//     char *months[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
//     for (int j = 0; j < 12; j++) {
//         printf("%s    %.1f\n", months[j], monthly_avg[j]);
//     }

//     return 0;
// }
#include<stdio.h>
int main(){
    int sum=0,k=0;
    float avgmonth[10];
    float averageyear[10];
    int total;
    int years[5] = {2010, 2011, 2012, 2013, 2014}; 
    char *months[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
int A[5][12];
for(int i=0;i<5;i++){
    for(int j=0;j<12;j++){
        scanf("%d",&A[i][j]);
        // avgmonth[j]=avgmonth[j]+A[k++][i];
        sum =sum +A[i][j];
    }
    averageyear[i]=averageyear[i]+sum;
    sum = 0;
}
for(int i=0;i<5;i++)
{
    averageyear[i]=averageyear[i]/12;
    printf("%d\t %f\n",years[i],averageyear[i]);
    total = total+averageyear[i];
}
total = total/5;
printf("the yearly average is %d",total);
for(int j=0;j<12;j++){
    for(int i=0;i<5;i++){
        avgmonth[j]=avgmonth[j]+A[i][j];
}
avgmonth[j]=avgmonth[j]/5;
}
for(int i=0;i<12;i++){
    printf("\n%s\t %f",months[i],avgmonth[i]);
    
}


}