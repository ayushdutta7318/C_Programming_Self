/*Passing values to fn by reference*/

#include <stdio.h>

void swapNum(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    return;
}

void swapPointer(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

    return;
}

// returing a pointer from fn:

int *myFunctionPointer()
{
}

// challenge: square of number:
int squareNum(int *num)
{
    return (*num) * (*num);
}

int main(void)
{
    int a = 100;
    int b = 300;

    // pass by value
    //  before swap:
    printf("Before swap: a: %d, b: %d\n", a, b);

    // after swap:
    swapNum(a, b);
    printf("After Swap: a: %d, b: %d\n", a, b); // no change

    // pass by reference:
    swapPointer(&a, &b);
    printf("Values: a: %d, b: %d\n", a, b);

    //challenge fn:
    int num = 3;
    // squareNum(&num);
    printf("square of num: %d\n", squareNum(&num));

    return 0;
}

/*
# Pass by value

there are a few different ways you can pass data to a function

pass by value

pass by reference

pass by value is when a function copies the actual value of an argument into the formal parameter of the function

changes made to the parameter inside the function have no effect on the argument

C programming uses call by value to pass arguments

means the code within a function cannot alter the arguments used to call the function

there are no changes in the values, though they had been changed inside the function

################################################################

# Passing data using copies of pointers

pointers and functions get along quite well together

you can pass a pointer as an argument to a function and you can also have a function return a pointer as its result

pass by reference copies the address of an argument into the formal parameter

the address is used to access the actual argument used in the call

means the changes made to the parameter affect the passed argument

to pass a value by reference, argument pointers are passed to the functions just like any other value

you need to declare the function parameters as pointer types

changes inside the function are reflected outside the function as well

unlike call by value where the changes do not reflect outside the function
*/