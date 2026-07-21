#include <stdio.h>
int main()
{
    int a, b, c, d, s, n, r;
    printf("enter any four-digit number: ");
    scanf("%d", &n);
    a = n/1000;
    b = (n%1000)/100;
    c = (n%100)/10;
    d = n%10;
    s = a + b + c + d;
    r = d*1000 + c*100 + b*10 + a;
    printf("sum of digits: %d\n", s);
    printf("reverse of number: %d\n", r);
    return 0;
}