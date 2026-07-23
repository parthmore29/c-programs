//number input and sum program using while loop
#include<stdio.h>
    int main()
{
    int num, sum = 0;
    printf("======================================\n");
    printf("NUMBER SUM CALCULATOR\n");
    printf("======================================\n");
    printf("ENTER THE NUMBER TO ADD : ");
    scanf("%d", &num);
    while(num != 0)
    {
        sum += num;
        printf("ENTER THE NUMBER TO ADD : ");
        scanf("%d", &num);
    }
    printf("======================================\n");
    printf("TOTAL SUM : %d\n", sum);
    printf("======================================\n");
    return 0;
}