// WAP to check the character is alphabet
#include <stdio.h>

int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);   
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
        printf("the character is an alphabet.\n");
    }
    printf("execution is over");
    return 0;
}
// Enter a character: A
// the character is an alphabet.
// execution is over