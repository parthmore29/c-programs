#include<stdio.h>
int main()
{
    int secret_number = 7;
    int guess;
    printf("===============================\n");
    printf("NUMBER GUESSING GAME \n");
    printf("===============================\n");
    printf("Guess the secret number between 1 to 10! \n");
    do
    {
        printf("\nEnter your guess: ");
        scanf("%d", &guess);
        if (guess < secret_number)
        {
            printf("\ntoo low ! guess again.\n");
        }
        else if (guess > secret_number)
        {
            printf("too high! try again\n");
        }
        else
        {
            printf("correct !!!! jeet gaye tum !!!\n");
        }
    } while (guess != secret_number);

    printf("\n=============================================\n");
    printf(" GAME OVER!! maja aaya???");
    printf("\n===============================================\n");
    return 0;
}
    