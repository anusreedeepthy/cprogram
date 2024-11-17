// 6. Scope of Variables
// Question: Write a program that demonstrates the concept of variable scope by declaring a global variable and modifying it within a function. Print the value of the global variable before and after modification.
//  Using Augmented Assignment Operators



#include <stdio.h>
int value = 10; 

void updated() {
    value = value + 5;  
    printf(" after updating: %d\n", value);
}

int main() {
    printf("Before updating : %d\n", value);
        updated();
    
    return 0;
}
