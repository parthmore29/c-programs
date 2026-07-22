#include <stdio.h>

int main()
{
    int pin;
    float balance;

    printf("====================================\n");
    printf("          ATM LOGIN SYSTEM\n");
    printf("====================================\n");

    printf("Enter your PIN: ");
    scanf("%d", &pin);

    if (pin == 1234)
    {
        printf("\nPIN Verified Successfully!\n");

        printf("Enter your account balance: ");
        scanf("%f", &balance);

        if (balance >= 1000)
        {
            printf("\nWithdrawal Allowed!\n");
            printf("You have sufficient balance.\n");
        }
        else
        {
            printf("\nInsufficient Balance!\n");
            printf("You cannot make this withdrawal.\n");
        }
    }
    else
    {
        printf("\nIncorrect PIN!\n");
        printf("Access Denied.\n");
    }

    printf("\nThank you for using our ATM.\n");

    return 0;
}