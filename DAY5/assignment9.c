
#include <stdio.h>

int main() {
    int hours;
    float grosspay, tax = 0.0, net_pay;
    const float payrate = 12.0;
    const float overtimerate = 1.5 * payrate;
    printf("Enter the number of hours worked in a week: ");
    scanf("%d", &hours);
    if (hours <= 40) {
        grosspay = hours * payrate;
    } else {
        grosspay = (40 * payrate) + ((hours - 40) * overtimerate);
    }

    if (grosspay <= 300) {
        tax = grosspay * 0.15;
    } else if (grosspay <= 450) {
        tax = (300 * 0.15) + ((grosspay - 300) * 0.20);
    } else {
        tax = (300 * 0.15) + (150 * 0.20) + ((grosspay - 450) * 0.25);
    }

    net_pay = grosspay - tax;

    printf("Gross Pay: %.2f\n", grosspay);
    printf("Taxes: %.2f\n", tax);
    printf("Net Pay: %.2f\n", net_pay);

    return 0;
}
// output
// Enter the number of hours worked in a week: 44
// Gross Pay: 552.00
// Taxes: 100.50
// Net Pay: 451.50








































// #include<stdio.h>
// int main()
// {
//     int n,work,interest;
//     printf("enter hour you done the work:");
//     scanf("%d",&n);
//     work = n*12;
//     printf("%d",work);
//     if(work>300){
//         printf("the amount %d",work);
//          interest =work * 0.3;
//          printf("%d",interest);
//     }

// }