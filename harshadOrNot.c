#include <stdio.h>
void main()
{
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    int m = n;
    while (n != 0)
    {
        int d = n % 10;
        sum += d;
        n /= 10;
    }
    if (m % sum == 0)
    {
        printf("%d is a Harshad/ Niven number", m);
    }
    else
    {
        printf("%d is not a Harshad/ Niven number", m);
    }
}