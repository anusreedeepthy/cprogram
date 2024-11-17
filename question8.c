//  Array of Variables
// Question: Create an array of integers with five elements. Initialize it with values of your choice, then write a program to calculate and print the sum of all elements in the array.
// has context menu


#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int sum =0;
    for(int i =0;i<5;i++)
    {
        sum = sum + arr[i];
    }
    printf("the sum is %d",sum);
    return 0;
}


