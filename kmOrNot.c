#include <stdio.h>
void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int m = n, sum = 0;
    while (n != 0)
    {
        int d = n % 10;
        int fact = 1;
        for (int i = 1; i <= d; i++)
            fact *= i;
        sum += fact;
        n /= 10;
    }
    if (sum == m)
    {
        printf("%d is a KM number", m);
    }
    else
    {
        printf("%d is not a KM number", m);
    }
}