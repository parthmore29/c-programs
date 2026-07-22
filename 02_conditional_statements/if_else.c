#include<stdio.h>
int main()
{
    int day;
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("DAY VIBES CHECKER✨✨✨\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("ENTER YOUR DAY NUMBER (1-7): ");
    scanf("%d", &day);
    printf("\n------------RESULT-----------------------\n");
    if(day == 6 || day == 7)
    {
        printf("WEEKEND MODE ACTIVATED💜\n");
        printf("TIME TO RELAX AND CHILL😎!!!\n");
    }
    else
    {
        printf("its a weekday!\n");
        printf("time to focus and get things done🔥");
 }
    printf("\n-----------------------------------\n");
    printf("HUGS FOR A GREAT DAY🫂🫂🫂🫂🫂🫂🫂🫂\n"   );
    printf("thanks for using this program :) \n");
    return 0;
}