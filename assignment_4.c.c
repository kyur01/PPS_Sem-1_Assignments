#include <stdio.h>

int main(void)

{
    // Display of menu

    printf("MATRIX CALCULATOR\n\n");

    printf("*****MENU*****\n");

    printf("+ Addition \n");

    printf("- Subtraction \n\n");

    printf("Enter your choice: \n\n");

    // Defining int and char

    char choice;

    int row, column, result[10][10], A[10][10], B[10][10], i, j;

    // Checking if the input is a character

    if (scanf("%c", &choice) != 1)
    {
        printf("INAVLID INPUT\n");

        return (1);
    }

    // Checking if the input is + or -

    if (choice == '+')
    {
        printf("Selected matrix addition.\n\n");
    }

    else if (choice == '-')
    {
        printf("Selected matrix subtraction.\n\n");
    }

    else
    {
        printf("INVALID CHOICE (please enter + or -)\n");

        return (1);
    }

    // Taking input of number of rows and checking if they are integers

    printf("Enter number of rows (between 1 and 10): ");

    if (scanf("%d", &row) != 1)
    {
        printf("INVALID INPUT (enter a number)\n");

        return (1);
    }

    if (row <= 0 || row > 10)
    {
        printf("Number of rows must be between 1 and 10\n\n");

        return (1);
    }

    // Taking input of number of columns and checking if they are integers

    printf("Enter number of columns (between 1 and 10): ");

    if (scanf("%d", &column) != 1)
    {
        printf("INVALID INPUT (enter a number)\n");

        return (1);
    }

    if (column <= 0 || column > 10)
    {
        printf("Number of columns must be between 1 and 10\n\n");

        return (1);
    }

    // Taking input for matrix 1 and checking if they are integers

    printf("\nEnter elements of first matrix\n");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {

            printf("Enter element A%d%d : ", i + 1, j + 1);

            if (scanf("%d", &A[i][j]) != 1)
            {
                printf("INVALID INPUT (enter a number)\n");

                return (1);
            }
        }
    }

    // Taking input for matrix 1 and checking if they are integers

    printf("\nEnter elements of second matrix\n");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {

            printf("Enter element B%d%d : ", i + 1, j + 1);

            if (scanf("%d", &B[i][j]) != 1)
            {
                printf("INVALID INPUT (enter a number)\n");

                return (1);
            }
        }
    }

    // Displaying both the input matrices

    printf("\nElements of first matrix:\n");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf("\nElements of second matrix:\n");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    // Performing choosen operation

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            if (choice == '+')
            {
                result[i][j] = A[i][j] + B[i][j];
            }

            if (choice == '-')
            {
                result[i][j] = A[i][j] - B[i][j];
            }
        }
    }

    // Displaying the resulting matrix

    printf("\nResult of the matrices:\n");
    for (i = 0; i < row; ++i)
    {
        for (j = 0; j < column; ++j)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
