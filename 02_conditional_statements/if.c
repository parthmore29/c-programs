#include <stdio.h>
int main()
{
    int marks;

    printf("===============================\n");
    printf("STUDENTS PERFORMANCE CHECKER\n");
    printf("===============================\n");
    printf("Enter your marks: ");
    scanf("%d", &marks);
    printf("\n-------------------------------\n");
    if (marks >=85)
    {
        printf("excellent performance!!!\n");
    }
    if (marks >=70)
    {
        printf("good performance!!!\n");
    }
    if (marks <= 60)
    {
        printf("good performance!!!\n");    

    }
    if (marks <=50)
    {
        printf("okay performance!!!\n");
    }
    if (marks <=40)
    {
        printf("padhai karlo beta!!!\n");
    }
    if (marks == 100)
    {
        printf("perfect performance!!! outstanding!!!\n");
    }
    printf("\n-------------------------------\n");
    printf("thanks for using this program :) \n");

    return 0;
}
