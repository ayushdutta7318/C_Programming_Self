/*Void pointer*/

#include <stdio.h>

int main(void){
    int a = 5;
    float b = 3.0f;
    char ch = 'k';

    //declare pointer
    void *vptr;

    //addr of int
    vptr = &a;
    printf("a value by pointer: %d\n", *(int*)vptr);
    printf("a addr: %p\n", (int*)vptr);

    //addr of float
    vptr = &b;
    printf("b addr: %p\n", (float*)vptr);
    printf("b value: %.3f\n", *(float*)vptr);

    //char addr:
    vptr = &ch;
    printf("ch addr: %p\n", (char*)vptr);
    printf("value of ch: %c\n", *(char*)vptr);
    return 0;
}

/*
the type name void means absence of any type

a pointer of type void* can contain the address of a data item of any type

void* is often used as a parameter type or return value type with functions that deal with data in a type-independent way

any kind of pointer can be passed around as a value of type void*

the void pointer does not know what type of object it is pointing to, so, it cannot be dereferenced directly

the void pointer must first be explicitly cast to another pointer type before it is dereferenced

the address of a variable of type int can be stored in a pointer variable of type void*

when you want to access the integer value at the address stored in the void* pointer, you must first cast the pointer to type int*
*/