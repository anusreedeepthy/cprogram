// Assignment 6: Array of Constants

// Objective: Learn how to declare and use arrays with const.

// Create an array of constants representing days of the week. Print each day using a loop, ensuring that no modifications can be made to the array elements.
 #include<stdio.h>
 int main(){
    int const * day[10] ={"sunday","monday","tuesday","wednesday","thursday","friday","saturday"};
    for(int i=0;i<7;i++){
        printf("%s\n",day[i]);
    }
    // day[0]="new day";
 }