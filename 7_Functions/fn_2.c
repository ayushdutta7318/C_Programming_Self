#include <stdio.h>

/*
Parameter: var passed when we declare fn.
Argument: specific parameter values passed to fn when we invoke it
*/

void addTwoNumbers(int a, int b)
{
    int sum = a + b;
    printf("Sum of %d and %d is: %d\n", a, b, sum);
}

void multiplyTwoNumbers(int p, int q)
{
    int result = p * q;
    printf("Product of %d and %d is: %d\n", p, q, result);
}

int main(void)
{
    addTwoNumbers(3, 5);
    multiplyTwoNumbers(5, 9);

    return 0;
}
