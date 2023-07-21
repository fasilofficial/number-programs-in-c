#include <stdio.h>
void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int m = n, flag = 0, square = n * n;
    while (n != 0)
    {
        int d = n % 10;
        int d1 = square % 10;
        if (d != d1)
        {
            flag = 1;
        };
        square /= 10;
        n /= 10;
    }
    if (flag == 0)
    {
        printf("%d is an automorphic number", m);
    }
    else
    {
        printf("%d is not an automorphic number", m);
    }
}