// prog to print even or odd:

#include <stdio.h>

void main()
{
    int number_to_test, remainder;

    printf("Enter number to test: \n");
    scanf("%d", &number_to_test);

    remainder = number_to_test % 2;
    if (remainder == 0)
    {
        printf("%d is an even number\n", number_to_test);
    }
    else
    {
        printf("%d is an odd number\n", number_to_test);
    }
}