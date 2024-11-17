// wap to check for the special character
#include <stdio.h>

int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    
 if (c == '@' || c == '#' || c == '$' || c == '%' || c == '^' || c == '&' || c == '*' || 
        c == '(' || c == ')' || c == '!' || c == '+' || c == '_' || c == '{' || c == '}' || 
        c == '[' || c == ']' )   
  {
        printf("The character  is a special character.\n");
     }

   printf("the execution is over");
}
