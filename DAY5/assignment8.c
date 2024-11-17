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






#include <stdio.h>

int main() {
    float amps, volts, watts, kilowatt_hours, usage, rate = 0, cost, prev_month, this_month;

    printf("Enter the amplitude: ");
    scanf("%f", &amps);
    printf("Enter the voltage: ");
    scanf("%f", &volts);
    printf("Enter the previous month's reading: ");
    scanf("%f", &prev_month);
    printf("Enter the current month's reading: ");
    scanf("%f", &this_month);

    usage = this_month - prev_month;
    if (usage < 0) {
        printf("Current reading cannot be less than previous reading.\n");
        return 1;
    }
   
    watts = amps * volts;
    kilowatt_hours = watts * usage / 1000;
    
    if (kilowatt_hours >= 1 && kilowatt_hours <= 100) {
        rate = 4.22;
    } else if (kilowatt_hours >= 101 && kilowatt_hours <= 200) {
        rate = 5.02;
    } else if (kilowatt_hours > 200) {
        rate = 5.82;
    } else {
        printf("The readings are invalid!\n");
        return 1;
    }
                                            
    cost = kilowatt_hours * rate + 40 + (kilowatt_hours * 0.15);

    printf("Total cost: Rs. %.2f\n", cost);

    return 0;
}

// output
// Enter the amplitude: 10
// Enter the voltage: 230
// Enter the previous month's reading: 1200
// Enter the current month's reading: 1250
// Total cost: Rs. 634.55







































































































// #include <stdio.h>

// int main() {
//     int n, m, energy;
//     float energycharge = 0.0, total;
//     float fixedcharge = 40.0;
//     float perunit = 0.15;

//     printf("Enter current meter reading: ");
//     scanf("%d", &n);
//     printf("Enter previous meter reading: ");
//     scanf("%d", &m);
//     energy = n - m;
//     if (energy <= 100) {
//         energycharge = energy * 4.22;
//     } else if (energy <= 200) {
//         energycharge = 100 * 4.22 + (energy - 100) * 5.02;
//     }
//     total = energycharge + fixedcharge + (energy * perunit);
//     printf("The total amount is: Rs. %.2f\n", total);

//     return 0;
// }