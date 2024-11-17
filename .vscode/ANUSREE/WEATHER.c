// Problem Statement 4: Weather Data Analysis
 
// Description: Write a program that collects daily temperature data for a month and analyzes it to find the average temperature, the highest temperature, the lowest temperature, and how many days were above average.
 
// Requirements:

// 1. Use appropriate data types (float for temperatures and int for days).

// 2. Store temperature data in an array.

// 3. Use control statements to calculate:

// 	i.   Average Temperature of the month.

// 	ii.  Highest Temperature recorded.

// 	iii. Lowest Temperature recorded.

// 	iv.  Count of days with temperatures above average.

// 4. Handle cases where no data is entered.
 
// Example Input/Output:

// Enter temperatures for each day of the month (30 days):

// Day 1 temperature: 72.5 

// Day 2 temperature: 68.0 

// ...

// Day 30 temperature: 75.0
 
// Average Temperature of Month: XX.X 

// Highest Temperature Recorded: YY.Y 

// Lowest Temperature Recorded: ZZ.Z 

// Number of Days Above Average Temperature: N 


#include<stdio.h>
int main(){
    
    int day =30,sum=0,temp[day],average,height,lowest,count=0;
    for(int i=0;i<day;i++)
    {
        printf("enter the number");
        scanf("%d",&temp[i]);
        sum = sum + temp[i];


    }
    printf("enter the sum %d\n",sum);
    average = sum/day;
    printf(" the average %d\n",average);

    height=temp[0];
    lowest = temp[0];
    for(int i =0;i<day;i++){
        if(temp[i]>height){
            height=temp[i];
        }
        else if(temp[i]<lowest){
            lowest=temp[i];
        }

    }
    printf("the heighest %d\n",height);
    printf("the lowest %d\n",lowest);

    for(int i=0; i<day;i++){
        if(average<temp[i]){
            count++;
        }
    }
    printf("number of days above the average %d\n",count);
    
    
}



