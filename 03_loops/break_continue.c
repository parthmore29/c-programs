#include <stdio.h>

int main(void)
{
    int i;

    printf("NUMBERS DIVISIBLE BY 3 before 15:\n");

    for (i = 1; i <= 15; i++)
    {
        if (i == 15)
        {
            break;
        }

        if (i % 3 != 0)
        {
            continue;
        }

        printf("%d\n", i);
    }

    printf("\nscanning completed");
    return 0;
}
