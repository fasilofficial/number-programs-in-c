#include <stdio.h>
void main()
{
    int n, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    int m = n;
    while (n != 0)
    {
        int d = n % 10;
        rev = rev * 10 + d;
        n /= 10;
    }
    if (rev == m)
    {
        printf("%d is a palindrome number", m);
    }
    else
    {
        printf("%d is not a palindrome number", m);
    }
}