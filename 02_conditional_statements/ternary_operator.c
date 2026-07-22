#include <stdio.h>
int main()
{
    int month;
    char *power;
    printf("*=======================================*\n");
    printf(" YOUR BIRTH MONTH, YOUR SPECIAL ABILITY\n");
    printf("*=======================================*\n");
    printf("TELL ME YOUR BIRTH MONTH (1-12)~~~ ");
    scanf("%d", &month);
    power = (month>= 1 && month <= 3) ? "READ MINDS" :
    (month >= 4 && month <= 6) ? "TIME TRAVEL" :
    (month >= 7 && month <= 9) ? "DARK MAGIC" :
    (month >= 10 && month <= 12) ? "SHAPESHIFTING" : "INVALID MONTH";
    printf("\n----------------------------------------\n");
    if(month >= 1 && month <= 12)
    {
        printf("YOUR SPECIAL ABILITY IS: %s\n", power);
        printf("which one did you get?\n");
    }
    else
    {
        printf("❌ OOPS! INVALID MONTH! Please enter a number between 1 and 12.\n");
    }
    return 0;
}