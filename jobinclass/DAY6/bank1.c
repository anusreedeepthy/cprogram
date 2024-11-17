#include <stdio.h>
#include <string.h>

int main() {
    char name[30];
    char acc_num[30] ;
    float acc_balance = 0.0;
    int op;

    while(1) {
        printf("\nWelcome to the Banking System\n");
        printf("1. Create Account\n2. Deposit Money\n3. Withdraw Money\n4. Check Balance\n5. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &op);
        
        switch(op) {
            case 1: {
                printf("Enter account holder name: ");
                getchar();  
                scanf("%s", name);
                printf("Enter Account Number: ");
                scanf("%s", acc_num);
                
                printf("Account created successfully!\n");
                acc_balance = 0.0; 
                break;
            }
            
            case 2: {
                char new_acc_num[30];
                float deposit_amount;

                printf("Enter account number: ");
                scanf("%s", new_acc_num);
                
                if(strcmp(acc_num, new_acc_num) == 0) {
                    printf("Enter amount to deposit: ");
                    scanf("%f", &deposit_amount);
                    
                    acc_balance += deposit_amount;
                    printf("Deposit successful! New Balance: %.2f\n", acc_balance);
                } else {
                    printf("Wrong account number! Try again!\n");
                }
                break;
            }
            
            case 3: {
                char new_acc_num[30];
                float withdraw_amount;

                printf("Enter account number: ");
                scanf("%s", new_acc_num);
                
                if(strcmp(acc_num, new_acc_num) == 0) {
                    printf("Enter amount to withdraw: ");
                    scanf("%f", &withdraw_amount);
                    
                    if(withdraw_amount > acc_balance) {
                        printf("Insufficient balance! Your current balance is %.2f\n", acc_balance);
                    } else {
                        acc_balance -= withdraw_amount;
                        printf("Withdrawal successful! New Balance: %.2f\n", acc_balance);
                    }
                } else {
                    printf("Wrong account number! Try again!\n");
                }
                break;
            }
            
            case 4: {
                char new_acc_num[30];

                printf("Enter account number: ");
                scanf("%s", new_acc_num);
                
                if(strcmp(acc_num, new_acc_num) == 0) {
                    printf("Current Balance: %.2f\n", acc_balance);
                } else {
                    printf("Wrong account number! Try again!\n");
                }
                break;
            }
            
            case 5: {
                printf("Exiting the system.\n");
                return 0;
            }
            
            default:
                printf("Invalid option! Please choose a valid option.\n");
                break;
        }
    }

    return 0;
}