# number-programs-in-c
Collection of multiple number programs in C language

1. Palindrom Number or Not
A palindromic number is a number that remains the same when its digits are reversed.
```
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
```
```
Enter a number: 1234321
1234321 is a palindrome number
```

2. Spy Number or Not
A number is said to be a Spy number if the sum of all the digits is equal to the product of all digits.
```
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
    if (sum == product)
    {
        printf("%d is a spy number", m);
    }
    else
    {
        printf("%d is not a spy number", m);
    }
}
```
```
Enter a number: 123
123 is a spy number
```

3. Special Number or Not
A number is said to be a Special number if the sum of digits plus product of digits is equal to the original number.
```
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
```
```
Enter a number: 59
59 is a special number
```

4. Harshad/Niven Number or Not
Harshad number or Niven number is a positive integer which is divisible by the sum of its digits.
```
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
```
```
Enter a number: 156
156 is a Harshad/ Niven number
```

5. Duck Number or Not
A Duck number is a positive number which has zeroes present in it.
```
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
```
```
Enter a number: 102
102 is a duck number
```

6. Neon Number or Not
A neon number is a number where the sum of digits of square of the number is equal to the number.
```
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
```
```
Enter a number: 9
9 is a neon number
```

7. Automorphic Number or Not
A number is called an automorphic number if and only if the square of the given number ends with the same number itself.
```
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
```
```
Enter a number: 25
25 is an automorphic number
```

8. KM Number or Not
A number is said to be a KM number or Special number, if the sum of factorials of the input number's every digit is equal to the same input number.
```
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
```
```
Enter a number: 145
145 is a KM number
```
