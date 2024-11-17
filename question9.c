// Assignment: User Authentication Program
// Objective
// Create a C program that prompts the user for a username and password, then checks if the entered credentials match predefined values. Use logical operators to determine if the authentication is successful.
// Requirements
// Define two constants for the correct username and password.
// Prompt the user to enter their username and password.
// Use logical operators (&&, ||, !) to check if:
// If both are correct, display a success message.
// Implement additional checks:
// If the username is empty, display a message indicating that the username cannot be empty.
// If the password is empty, display a message indicating that the password cannot be empty.
// The username matches the predefined username AND the password matches the predefined password.
// If either the username or password is incorrect, display an appropriate error message.




#include <stdio.h>
#include <string.h>

#define user "anusree"
#define password "anusree123"

int main() {
    char name[50];
    char Passwords[50];
    
    printf("Enter the username: ");
    scanf("%s", name);
    printf("Enter the password: ");
    scanf("%s", Passwords);

    if (strlen(name) == 0 || strlen(Passwords) == 0) {
        printf("Error: Username and password cannot be empty.\n");
        
    }
    if (strcmp(name, user) != 0 || strcmp(Passwords, password) != 0) {
        printf("Error: One of the username or password is incorrect.\n");
        } 
        else{
            printf("Authentication success %s" ,name);
        }
   

    return 0;
}
