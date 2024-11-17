// 3. User Input and Output
// Question: Write a program that prompts the user to enter their name and age, stores these values in appropriate variables, and then prints a greeting message that includes both the name and age.

#include<stdio.h>

int main() {
    char name[20]; 
    int age;        
    printf("Enter your name: ");
    scanf("%s", name);  
    printf("Enter your age: ");
    scanf("%d", &age);  
    printf("hi %s, you are %d years old.\n", name, age);

    return 0;
}

