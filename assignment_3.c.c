//BASIC ARITHMETIC CALCULATOR

#include <stdio.h>
 int main(void)

{
    printf("BASIC ARITHMETIC CALCULATOR \n \n");
//USER ENTERS CHOICE
int choice;
float A;
float B;

printf ("*****MENU*****\n");

printf ("1. Addition \n");
printf ("2. Subtraction \n");
printf ("3. Multiplication \n");
printf ("4. Division \n \n");

printf ("Enter your choice ");
scanf ("%d", &choice);

if (choice == 1)
{
printf ("Enter first number: ");
scanf ("%f", &A);

printf ("Enter second number: ");
scanf ("%f", &B);
    printf ("Result = %.3f" , A + B);
}

else if (choice == 2)
{
printf ("Enter first number: ");
scanf ("%f", &A);

printf ("Enter second number: ");
scanf ("%f", &B);
    printf ("Result = %.3f" , A - B);
}

else if (choice == 3)
{
printf ("Enter first number: ");
scanf ("%f", &A);

printf ("Enter second number: ");
scanf ("%f", &B);
    printf ("Result = %.3f" , A * B);
}

else if (choice == 4)
{
printf ("Enter first number: ");
scanf ("%f", &A);

printf ("Enter second number: ");
scanf ("%f", &B);

if (B != 0)
    printf ("Result = %.3f" , A / B);

    else
    printf ("Division by zero is not possible");

}

else 
{
    printf ("INVALID CHOICE");
}

return 0;
}
