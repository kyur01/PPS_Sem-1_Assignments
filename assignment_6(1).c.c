#include <stdio.h>

int main(void)

{
    int n, i, f = 1;

    printf("Enter a number : \n\n");

    if (scanf("%d", &n) != 1)
    {
        printf("\nINVALID INPUT\n");

        return (1);
    }

    else if (n < 0)
    {
        printf("\nFactorial is not defined for negative numbers");

        return (1);
    }

    else if (n == 0)
    {
        printf("\nFactorial of 0 = 1");

        return (1);
    }

    else if (n > 32)
    {
        printf("\nPlease enter number between 0 and 32");

        return (1);
    }

    else
    {
        for (i = 1; i <= n; i++)
        {
            f = f * i;
        }

        printf("\nFactorial of %d = %d \n", n, f);
    }

    return (0);
}
