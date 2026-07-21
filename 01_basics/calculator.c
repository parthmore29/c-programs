#include <stdio.h>
int main()
{
    float a, b;
    printf("===============================\n");
    printf("      SIMPLE CALCULATOR\n");
    printf("===============================\n");
    printf("enter first number: ");
    scanf("%f", &a);
    printf("enter second number: ");
    scanf("%f", &b);
    printf("=========RESULTS====================\n");
    printf("Addition: %.2f\n", a + b);
    printf("Subtraction: %.2f\n", a - b);
    printf("Multiplication: %.2f\n", a * b);
    printf("Division: %.2f\n", a / b);
    return 0;   
}