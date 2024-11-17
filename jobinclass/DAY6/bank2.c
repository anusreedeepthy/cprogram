#include<stdio.h>
#include<string.h>
int main(){
    char name[100];
    char accno[100];
    float amountbalance =0.0;
    int op;
     char accnew[100];
    float balance;
    float debit;

    while(1)
    {    
    printf("THE BANK\n");
    printf("1. create account\n");
    printf("2. deposit account\n");
    printf("3. withdraw account\n");
    printf("3. balance account\n");
    printf("5. exit account\n");
    printf("enter the option\n");
    scanf("%d",&op);

    switch (op)
    {
    case 1:
        printf("enter the name ");
        scanf("%s",name);
        printf("enter the account number");
        scanf("%d",&accno);
        printf("you have success fully created the account in this bank");
        break;
    case 2:
       
        printf("enter the account number");
        scanf("%d",&accnew);
       
        if(strcmp(accnew,accno)==0){
        printf("enter the amount");
        scanf("%f",&balance);
        amountbalance = amountbalance + balance;
        printf("the current balance is %f",amountbalance);
           
        }
        else{
            printf("the account is an incorrect in the bank");
        }
        break;
    case 3 :
        printf("enter the account number");
        scanf("%d",&accnew);
       
        if(strcmp(accnew,accno)==0){
            printf("enter the amount which is to be debited");
            scanf("%f",&debit);
            amountbalance = amountbalance - debit;

        printf("the current balance is %2f",amountbalance);

        }
        else{
            printf("the account number is in currect");
        }
      
    break;

    case 4 :
        printf("enter the account number");
        scanf("%d",&accnew);
       
        if(strcmp(accnew,accno)==0){
        printf("the current balance is %2f",amountbalance);

        }
        else{
                printf("the account number is in currect");

        }
        break;
    case 5:
        printf("exit the statement");
        return 0;
        break;
        
    default:
        break;
    }

}
}


