#include <stdio.h>
void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int m = n, sum = 0;
    n *= n;
    while (n != 0)
    {
        int d = n % 10;
        sum += d;
        n /= 10;
    }
    if (sum == m)
    {
        printf("%d is a neon number", m);
    }
    else
    {
        printf("%d is not a neon number", m);
    }
}