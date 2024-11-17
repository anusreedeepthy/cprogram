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
    float previous_reading, current_reading, energy_consumed, energy_charges = 0, total_bill;
    const float fixed_charge = 40.0;
    const float energy_duty_rate = 0.15;
    
    // Input previous and current meter readings
    printf("Enter previous month's meter reading: ");
    scanf("%f", &previous_reading);
    printf("Enter current month's meter reading: ");
    scanf("%f", &current_reading);

    // Calculate the energy consumed
    energy_consumed = current_reading - previous_reading;
    
    if (energy_consumed <= 100) {
        energy_charges = energy_consumed * 4.22;  // Slab 1
    } else if (energy_consumed <= 200) {
        energy_charges = 100 * 4.22 + (energy_consumed - 100) * 5.02;  // Slab 2
    } else {
        energy_charges = 100 * 4.22 + 100 * 5.02 + (energy_consumed - 200) * 6.02;  // Slab 3
    }

    // Calculate total bill including fixed charge and energy duty
    total_bill = energy_charges + fixed_charge + (energy_consumed * energy_duty_rate);

    // Display the calculated total bill
    printf("Energy Consumed: %.2f units\n", energy_consumed);
    printf("Energy Charges: Rs. %.2f\n", energy_charges);
    printf("Energy Duty: Rs. %.2f\n", energy_consumed * energy_duty_rate);
    printf("Fixed Charge: Rs. %.2f\n", fixed_charge);
    printf("Total Bill: Rs. %.2f\n", total_bill);

    return 0;
}
