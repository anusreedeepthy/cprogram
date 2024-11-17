// WAP to calculate the electricity bill based on the formula mentioned below
 
// Calculations
// To calculate your electricity bill, follow these steps:
// Watts = (amps) x (volts)
 
// Kilowatt-hours = (watts) x (usage) / 1000.
 
// Cost = (kilowatt-hours) x (electricity rate)
 
// 1. Subtract the current meter reading from the previous month’s reading to find the energy consumption.
 
// 2. Multiply the units consumed by the per-unit charges based on the applicable slabs (e.g., Rs. 4.22 for 1-100 units, 
// Rs. 5.02 for 101-200 units).
 
// 3. Add the fixed charge and energy duty (e.g., Rs. 40 fixed charge and Rs. 0.15 per unit) to the energy charges.
 
// 4. The sum of the energy charges, fixed charge, and energy duty gives you the total bill amount.
 
 
// Example: If you consumed 250 units with the applicable slabs mentioned above, the energy charges would be Rs. 1218. 
// Adding the fixed charge and energy duty, the total bill amount would be Rs. 1296.
#include<stdio.h>
int main(){
    float current,previous,ampt ,voltage;
    printf("enter the amps");
    scanf("%f",&ampt);
    printf("enter the voltage");
    scanf("%f",&voltage);
    printf("current month");
    scanf("%f",&current);
    printf("previous month");
    scanf("%f",&previous);
    float walts,usage,cost;
    float rate=0;
    usage = current -previous;
    walts = ampt * voltage;
    int kilowalt_hour =walts * usage /1000;
    if(kilowalt_hour>=1 && kilowalt_hour<=100){
        rate = 4.22;
    }
    else if(kilowalt_hour>=100 && kilowalt_hour<=200){
        rate = 5.02;
    }
    else if(kilowalt_hour>200){
        rate=5.82;
    }
    cost = kilowalt_hour * rate + 40 +(kilowalt_hour * 0.15);
    printf("the total cost %f",cost);
}