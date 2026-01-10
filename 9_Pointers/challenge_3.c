#include <stdio.h>

int main(void)
{
    // declare pointer:
    int number = 3;
    int *pointerNumber = &number;

    // addr of number
    printf("Addr of number: %p\n", (void *)pointerNumber);

    // addr of pointerNumber
    printf("Addr of pointerNumber: %p\n", &pointerNumber);

    // value pointerNumber refers to:
    printf("Value stored at pointer Number: %d\n", *pointerNumber);

    // quiz
    int *n;
    printf("%p\n", *n);
    printf("%p\n", n);

    // int *z = NULL;
    // printf("%p\n", z);
    // printf("%p\n", *z);

    int *p = NULL;

    int *q = 0;

    if (p)

        printf(" p ");

    else

        printf("nullp");

    if (q)

        printf("q\n");

    else

        printf(" nullq\n");

     int x = 0;

            int *ptr = &5;



            printf("%p\n", ptr);
    return 0;
}