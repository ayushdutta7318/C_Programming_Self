/*pointers and arrays*/

#include <stdio.h>

int main(void){
    int values[100];
    int *valuesPtr;
    valuesPtr = values; // & NOT used

    // or for specific value of arr:
    valuesPtr = &values[0];
    return 0;
}

/*
Overview

an array is a collection of objects of the same type that you can refer to using a single name

a pointer is a variable that has as its value a memory address that can reference another variable or constant of a given type

you can use a pointer to hold the address of different variables at different times (must be same type)

arrays and pointers seem quite different, but, they are very closely related and can sometimes be used interchangeably

one of the most common uses of pointers in C is as pointers to arrays

the main reasons for using pointers to arrays are ones of notational convenience and of program efficiency

pointers to arrays generally result in code that uses less memory and executes faster
*/