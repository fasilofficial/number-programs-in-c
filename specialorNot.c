#include <stdio.h>
void main()
{
    int n, sum = 0, product = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    int m = n;
    while (n != 0)
    {
        int d = n % 10;
        sum += d;
        product *= d;
        n /= 10;
    }
    if (sum + product == m)
    {
        printf("%d is a special number", m);
    }
    else
    {
        printf("%d is not a special number", m);
    }
}