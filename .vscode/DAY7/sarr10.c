// Write a program that counts and displays how many times a specific integer appears in an array entered by the user.

#include <stdio.h>

int main() {
    int arr[10], n;
    printf("Enter the number of elements to store (max 10): ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        int count = 1;
        
        if (arr[i] != -1) { 
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    arr[j] = -1; 
                }
            }
            printf("%d appears %d times\n", arr[i], count);
        }
    }

    return 0;
}
