#include <stdio.h>
void main()
{
    int n, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    int m = n;
    while (n != 0)
    {
        int d = n % 10;
        if (d == 0)
        {
            count++;
        }
        n /= 10;
    }
    if (count > 0)
    {
        printf("%d is a duck number", m);
    }
    else
    {
        printf("%d is not a duck number", m);
    }
}