// 2. Write a C program that attempts to swap two integers using a function that employs call by value. Show that the original values remain unchanged after the function call.

#include <stdio.h>

int swap(int,int);
int main() {
    int n = 5, m = 4;

    printf("Before swap function call: n = %d, m = %d\n", n, m);
    swap(n, m);
    printf("After swap function call: n = %d, m = %d\n", n, m);

    return 0;
}
int swap(int x, int y) {
    int temp = x;
    x = y;
    y = temp;

    printf("Inside swap function: x = %d, y = %d\n", x, y);
}