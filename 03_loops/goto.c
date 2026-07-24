#include <stdio.h>

int main()
{
    int choice;
    float a, b;

menu:

    printf("\n==============================\n");
    printf("       MINI CALCULATOR\n");
    printf("==============================\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    if (choice == 5)
    {
        printf("\nCalculator closed. Goodbye!\n");
        goto end;
    }

    if (choice < 1 || choice > 5)
    {
        printf("\nInvalid choice! Try again.\n");
        goto menu;
    }

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    if (choice == 1)
    {
        printf("Result = %.2f\n", a + b);
    }
    else if (choice == 2)
    {
        printf("Result = %.2f\n", a - b);
    }
    else if (choice == 3)
    {
        printf("Result = %.2f\n", a * b);
    }
    else if (choice == 4)
    {
        if (b == 0)
        {
            printf("Cannot divide by zero!\n");
        }
        else
        {
            printf("Result = %.2f\n", a / b);
        }
    }

    goto menu;

end:

    return 0;
}