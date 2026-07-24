#include <stdio.h>

int main()
{
    int answer;
    int score;
    int playAgain;

    do
    {
        score = 0;

        printf("\n====================================\n");
        printf("          🧠 MINI QUIZ GAME\n");
        printf("====================================\n");

        // Question 1
        printf("\n1. Which language are we learning right now?\n");
        printf("1. Python\n");
        printf("2. C\n");
        printf("3. Java\n");
        printf("Enter your answer: ");
        scanf("%d", &answer);

        if (answer == 2)
        {
            printf("Correct! ⭐\n");
            score++;
        }
        else
        {
            printf("Wrong answer! 😭\n");
        }

        // Question 2
        printf("\n2. Which loop is guaranteed to run at least once?\n");
        printf("1. for loop\n");
        printf("2. while loop\n");
        printf("3. do-while loop\n");
        printf("Enter your answer: ");
        scanf("%d", &answer);

        if (answer == 3)
        {
            printf("Correct! ⭐\n");
            score++;
        }
        else
        {
            printf("Wrong answer! 😭\n");
        }

        // Question 3
        printf("\n3. Which statement exits a loop immediately?\n");
        printf("1. continue\n");
        printf("2. break\n");
        printf("3. goto\n");
        printf("Enter your answer: ");
        scanf("%d", &answer);

        if (answer == 2)
        {
            printf("Correct! ⭐\n");
            score++;
        }
        else
        {
            printf("Wrong answer! 😭\n");
        }

        // Final Score
        printf("\n====================================\n");
        printf("          QUIZ COMPLETED!\n");
        printf("          Your Score: %d/3\n", score);
        printf("====================================\n");

        if (score == 3)
        {
            printf("🏆 PERFECT SCORE! You're a C master!\n");
        }
        else if (score == 2)
        {
            printf("🔥 Great job! Almost perfect!\n");
        }
        else
        {
            printf("📚 Keep learning! You can do better!\n");
        }

        printf("\nDo you want to play again?\n");
        printf("1. Yes\n");
        printf("0. No\n");
        printf("Enter your choice: ");
        scanf("%d", &playAgain);

    } while (playAgain == 1);

    printf("\nThanks for playing! 👋\n");

    return 0;
}


