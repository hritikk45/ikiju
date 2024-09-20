#include <stdio.h>

void main()
{
    int n, i, fact = 1;
    printf("Enter a number ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Factorial of negative is not allowed");
    }
    else if (n == 0)
    {
        printf("Factorial of %d is 1", n);
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            fact *= i;
        }

        printf("Factorial of %d is %d", n, fact);
    }
}