#include <stdio.h>
#include <stdbool.h>

int main()
{
    // q6
    // take i/p

    float n;
    printf("enter number: \n");
    scanf("%f", &n);

    // check if +ve, -ve.

    if (n == 0)
    {
        printf("%.3f is a neutral number\n", n);
    }
    else if (n > 0)
    {
        printf("%.3f is a positive number\n", n);
    }
    else
    {
        printf("%.3f is a negative number\n", n);
    }

    // q7
    printf("Enter a: \n");
    int a;
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("%i is a even number\n", a);
    }
    else
    {
        printf("%i is a odd number\n", a);
    }

    // q8
    int y = 1;
    int z = 5;

    _Bool result = y > z ? true : false;
    printf("result is : %d\n", result);

    // q9
    int year = 2020;
    bool r = year % 4 == 0 ? true : false;
    printf("%d is %d year\n", year, r);

    // q10
    int marks = 100;
    char grades;

    if (marks > 100)
    {
        printf("invalid marks\n");
    }
    else if (marks >= 90 && marks <= 100)
    {
        grades = 'A';
        printf("Grades: %c\n", grades);
    }
    else if (marks >= 75 && marks < 90)
    {
        grades = 'B';
        printf("Grades: %c\n", grades);
    }
    else if (marks >= 60 && marks < 75)
    {
        grades = 'C';
        printf("Grades: %c\n", grades);
    }
    else
    {
        printf("failed\n");
    }
    return 0;
}