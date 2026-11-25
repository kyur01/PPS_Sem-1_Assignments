#include <stdio.h>

void s(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int num1, num2;

    printf("Enter number 1 : ");
    scanf("%d", &num1);

    printf("Enter number 2 : ");
    scanf("%d", &num2);

    printf("Before swapping:\n");
    printf("num1 = %d  num2 = %d\n", num1, num2);

    s(&num1, &num2);

    printf("After swapping:\n");
    printf("num1 = %d  num2 = %d\n", num1, num2);

    return 0;
}
