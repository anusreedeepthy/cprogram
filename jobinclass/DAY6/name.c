// Problem Statement : Inventory Management System
 
// Description: Create an inventory management system that allows users to manage products in a store. Users should be able to add new products, update existing product quantities, delete products, and view inventory details.
 
// Requirements:

// 1. Use appropriate data types for product details (e.g., char arrays for product names, int for quantities, float for prices).
 
// 2. Implement a structure to hold product information.
 
// 3. Use control statements for menu-driven operations:

// 	i.   Add Product

// 	ii.  Update Product Quantity

// 	iii. Delete Product

// 	iv.  View All Products in Inventory
 
// 4. Ensure that the program handles invalid inputs and displays appropriate error messages.
 
// Example Input/Output:
 
// Inventory Management System

// 1. Add Product

// 2. Update Product Quantity

// 3. Delete Product

// 4. View All Products in Inventory

// 5. Exit
 
// Choose an option: 1

// Enter product name: Widget A

// Enter product quantity: 50

// Enter product price: 19.99
 
// Choose an option: 4

// Product Name: Widget A, Quantity: 50, Price: $19.99
 
// Choose an option: 5

// Exiting the system.

 #include <stdio.h>
#include <string.h> 

int main() {
    int op;
    char name[50];     
    int quality;       
    float price;       
    char new[50];      

    while(1) {
        printf("Inventory Management System\n");
        printf("1. Add product\n");
        printf("2. Update product\n");
        printf("3. Delete product\n");
        printf("4. View product\n");
        printf("5. Exit\n");
        printf("Enter the choice: ");
        scanf("%d", &op);

        switch (op) {
            case 1:  
                printf("Enter the product name: ");
                scanf("%s", name);
                printf("Enter the product quantity: ");
                scanf("%d", &quality);
                printf("Enter the price of the product: ");
                scanf("%f", &price);
                printf("The product has been entered.\n");
                break;

            case 2:  
                printf("Enter the product name to update: ");
                scanf("%s", new);
                if (strcmp(name, new) == 0) {  
                    printf("Product found. Enter the new quantity: ");
                    scanf("%d", &quality);
                    printf("Enter the new price of the product: ");
                    scanf("%f", &price);
                    printf("The product has been updated.\n");
                } else {
                    printf("Product not found.\n");
                }
                break;

            case 3:  
                printf("Enter the product name to delete: ");
                scanf("%s", new);
                if (strcmp(name, new) == 0) {
                    name[0]='\0';
                    quality=0;
                    price = 0;
                    printf("the product hase been deleted");
                }else{
                    printf("Product not found.\n");
                }
                break;

            case 4:  
                printf("Product name: %s\n", name);
                printf("Product quantity: %d\n", quality);
                printf("Product price: %.2f\n", price);
                break;

            case 5:  
                printf("Exiting the program.\n");
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
