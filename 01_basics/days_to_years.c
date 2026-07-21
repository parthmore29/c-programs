#include <stdio.h>
int main()
{
    int days, years, weeks, remaining;
    printf("enter the days: ");
    scanf("%d", &days);
    years = days/365;
    weeks = (days%365)/7;
    remaining = (days%365)%7;
    days = days%365;
    printf("years: %d\n", years);
    printf("weeks: %d\n", weeks);
    printf("remaining days : %d\n",days);
return 0;
}