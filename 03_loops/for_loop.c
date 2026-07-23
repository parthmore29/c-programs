#include<stdio.h>
int main()
{
    int num , i;
    printf("======================================\n");
    printf("multiplication table \n");
    printf("======================================\n");
    printf("enter the number : ");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n",num,i,num*i);
    }
    printf("======================================\n");
    return 0;
}