#include <stdio.h>

int main()
{
    int choice;
    float balance = 5000;
    float amount;

    printf("====================================\n");
    printf("          WELCOME TO MINI ATM\n");
    printf("====================================\n");

    while (choice != 4)
    {
        printf("\n----------- ATM MENU -----------\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("--------------------------------\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("\nYour current balance is: Rs. %.2f\n", balance);
        }
        else if (choice == 2)
        {
            printf("\nEnter amount to deposit: Rs. ");
            scanf("%f", &amount);

            if (amount > 0)
            {
                balance += amount;
                printf("Deposit successful!\n");
                printf("New balance: Rs. %.2f\n", balance);
            }
            else
            {
                printf("Invalid amount!\n");
            }
        }
        else if (choice == 3)
        {
            printf("\nEnter amount to withdraw: Rs. ");
            scanf("%f", &amount);

            if (amount > 0 && amount <= balance)
            {
                balance -= amount;
                printf("Withdrawal successful!\n");
                printf("Remaining balance: Rs. %.2f\n", balance);
            }
            else
            {
                printf("Invalid amount or insufficient balance!\n");
            }
        }
        else if (choice == 4)
        {
            printf("\nThank you for using Mini ATM! 👋\n");
        }
        else
        {
            printf("\nInvalid choice! Please try again.\n");
        }
    }

    return 0;
}