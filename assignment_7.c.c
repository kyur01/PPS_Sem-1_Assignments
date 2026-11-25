#include <stdio.h>

struct Student
{
    int R, M1, M2, M3, T;
    char Name[50];
    float P;
};

int main(void)
{
    struct Student s[50];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].R);

        printf("Enter Name: ");
        scanf("%49s", s[i].Name);

        printf("Enter marks for 3 subjects: ");
        scanf("%d %d %d", &s[i].M1,
              &s[i].M2, &s[i].M3);

        s[i].T = s[i].M1 + s[i].M2 + s[i].M3;

        s[i].P = s[i].T / 3.0;
    }

    printf("\n---------------- STUDENT RESULT ----------------\n");

    printf("%-10s %-15s %-10s %-10s %-10s %-10s %-12s\n",
           "Roll No", "Name", "Sub 1", "Sub 2",
           "Sub 3", "Total", "Percentage");

    printf("--------------------------------------------------------------------------\n");

    for (i = 0; i < n; i++)
    {
        printf("%-10d %-15s %-10d %-10d %-10d %-10d %-12.2f\n",
               s[i].R, s[i].Name, s[i].M1,
               s[i].M2, s[i].M3, s[i].T, s[i].P);
    }

    printf("--------------------------------------------------------------------------\n");

    return 0;
}
