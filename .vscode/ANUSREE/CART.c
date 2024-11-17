// You are tasked with creating a shopping cart system for a small store. Write a program that:

// 1.Displays the available items in the store with their prices.
// 2.Allows the user to add items to their shopping cart.
// 3.Allows the user to remove items from their cart.
// 4.Shows the total cost of the items in the cart at any time.
// 5.Provides an option to checkout and exit the program.
// Available items:  
// 1. Apple - $2  
// 2. Banana - $1  
// 3. Orange - $3  
// 4. Milk - $4  

// Choose an option:  
// 1. Add Item  
// 2. Remove Item  
// 3. View Cart  
// 4. Checkout  

// > 1  
// Enter item number to add: 2  

// > 1  
// Enter item number to add: 4  

// > 3  
// Items in cart:  
// 1. Banana - $1  
// 2. Milk - $4  
// Total cost: $5  

// > 4  
// Checkout complete. Thank you for shopping!
// qkm-fcyp-dis

#include<stdio.h>
int main(){
    int op,n[10],i=0;
    char cart[][10] ={"apple","banana","orange","milk"};
    char new[10];

while(1){
   
    
 printf("Available items: \n");
 printf("Apple - $2 : \n");
 printf("Banana - $1: \n");
 printf("Orange - $3: \n");
 printf("Milk - $4: \n");
 
 printf("\n");
 printf("choose an option");
 printf("1.Add Item \n");
 printf("2.Remove item\n");
 printf("3.View Cart\n");
 printf("4.Checkout\n");
scanf("%d",&op);

switch (op)
{
case 1:
   printf("enter the item to be added:\n");
   scanf("%d",n[i++]);

    break;
case 2:
   break;

case 3:
printf("Items in cart");
for(int j=0;j<i;j++){
    // new[j] = cart[n[j]];    
    printf("%s",cart[n[j]]);

    

}

 break;


default:
    break;
}







}




}