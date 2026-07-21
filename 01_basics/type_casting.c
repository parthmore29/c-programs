#include <stdio.h>

int main()
{
    int maths, physics, chemistry;
    int total;
    float percentage;

    printf("====================================\n");
    printf("      STUDENT PERFORMANCE ANALYZER\n");
    printf("====================================\n");

    printf("Enter Maths marks: ");
    scanf("%d", &maths);

    printf("Enter Physics marks: ");
    scanf("%d", &physics);

    printf("Enter Chemistry marks: ");
    scanf("%d", &chemistry);

    total = maths + physics + chemistry;

    // Type casting: converting total from int to float
    percentage = ((float)total / 300) * 100;

    printf("\n====================================\n");
    printf("           RESULT SUMMARY\n");
    printf("====================================\n");

    printf("Maths      : %d / 100\n", maths);
    printf("Physics    : %d / 100\n", physics);
    printf("Chemistry  : %d / 100\n", chemistry);

    printf("------------------------------------\n");

    printf("Total Marks: %d / 300\n", total);
    printf("Percentage : %.2f%%\n", percentage);

    printf("====================================\n");

    return 0;
}