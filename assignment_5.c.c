#include <stdio.h>
#include <string.h>

int main(void)

{
    // Menu display

    printf("*****MENU*****\n\n");

    printf("1 - String Length\n");

    printf("2 - String Comparision\n");

    printf("3 - String Concatenate (joins strings)\n");

    printf("4 - Copy String \n\n");

    printf("Enter your choice : \n\n");

    int choice;

    char str1[10], str2[10];

    // Checking if choice is an integer or not

    if (scanf("%d", &choice) != 1)
    {
        printf("INAVALID INPUT (enter an integer)\n");

        return (1);
    }

    // Performing operation

    if (choice == 1)
    {
        printf("\nSelected string length");

        printf("\n\nEnter string : ");

        scanf("%s", str1);

        printf("\nString Length = %d", (int)strlen(str1));
    }

    else if (choice == 2)
    {
        printf("\nSelected string comparision");

        printf("\n\nEnter first string : ");

        scanf("%s", str1);

        printf("\nEnter second string : ");

        scanf("%s", str2);

        if (strcmp(str1, str2) == 0)

            printf("\nStrings are equal");

        else

            printf("\nStrings are not equal");
    }

    else if (choice == 3)
    {
        printf("\nSelected string concatenate");

        printf("\n\nEnter first string : ");

        scanf("%s", str1);

        printf("\nEnter second string : ");

        scanf("%s", str2);

        strcat(str1, str2);

        printf("\nConcatanated string : %s", str1);
    }

    else if (choice == 4)
    {
        printf("\nSelected string copy");

        printf("\n\nEnter string : ");

        scanf("%s", str1);

        strcpy(str2, str1);

        printf("\nCopied string : %s ", str2);
    }

    else
    {
        printf("\nInvalid choice (choice should be between 1 and 4)");
    }

    return (0);
}
