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

#include <stdio.h>
#define DAYS_IN_MONTH 30

int main() {
    float temperatures[DAYS_IN_MONTH];
    float sum = 0.0, averageTemp, highestTemp, lowestTemp;
    int aboveAverageDays = 0;

    printf("Enter temperatures for each day of the month (%d days):\n", DAYS_IN_MONTH);
    for (int i = 0; i < DAYS_IN_MONTH; i++) {
        printf("Day %d temperature: ", i + 1);
        scanf("%f", &temperatures[i]);
        sum += temperatures[i];
    }

    averageTemp = sum / DAYS_IN_MONTH;

    highestTemp = temperatures[0];
    lowestTemp = temperatures[0];
    

    for (int i = 0; i < DAYS_IN_MONTH; i++) {
        if (temperatures[i] > highestTemp) {
            highestTemp = temperatures[i];
        }
        if (temperatures[i] < lowestTemp) {
            lowestTemp = temperatures[i];
        }
        if (temperatures[i] > averageTemp) {
            aboveAverageDays++;
        }
    }


    
    printf("\nAverage Temperature of Month: %.1f\n", averageTemp);
    printf("Highest Temperature Recorded: %.1f\n", highestTemp);
    printf("Lowest Temperature Recorded: %.1f\n", lowestTemp);
    printf("Number of Days Above Average Temperature: %d\n", aboveAverageDays);

    return 0;
}
