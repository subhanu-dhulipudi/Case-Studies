/*ATM application to check balance after cash withdrawal or cash deposit*/
#include<stdio.h>
void main()
{
    int choice;
    float balance,amount;
    printf("\nEnter current balance amount:");
    scanf("%f",&balance);

    printf("\n1. balance enquiry");
    printf("\n2. cash withdrawal");
    printf("\n3. cash deposit");

    printf("\nEnter your choice(1,2 or 3):");
    scanf("%d",&choice);

    switch (choice)
    {
        case 1:
            printf("Current Balance = %f", balance);
            break;
        case 2:
            printf("Enter amount to debit: ");
            scanf("%f", &amount);

            if (amount<=balance)
            {
                balance = balance - amount;
                printf("Amount debited successfully!\n");
                printf("Balance = %f", balance);
            }
            else
            {
                printf("Insufficient balance");
            }
            break;
        case 3:
            printf("Enter amount to credit: ");
            scanf("%f", &amount);
            balance = balance + amount;
            printf("Amount credited successfully!\n");
            printf("Balance = %f", balance);
            break;    
        default:
            printf("Invalid choice!");
    }
}
