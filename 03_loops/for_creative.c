#include<stdio.h>
int main()
{
    int n, i, j;
    printf("===============================\n");
    printf(" ASCII DIAMOND MAKER\n");
    printf("===============================\n");
    printf("Enter the size of the DIAMOND: ");
    scanf("%d", &n);
//upper half of the diamond
    for(i=1; i<=n; i++)
    {
        for(j=i; j<n; j++)
        {
            printf(" ");
        }
//print stars
        for(j=1; j<=(2*i-1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
// lower half of the diamond
    for (i = n - 1; i >= 1; i--)
    {
        // Print spaces
        for (j = i; j < n; j++)
        {
            printf(" ");
        }

        // Print stars
        for (j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }

        printf("\n");
    }

 return 0;
}