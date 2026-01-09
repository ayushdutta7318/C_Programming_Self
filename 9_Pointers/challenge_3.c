#include <stdio.h>

int main(void){
    //declare pointer:
    int number = 3;
    int *pointerNumber = &number;

    //addr of number
    printf("Addr of number: %p\n", (void*)pointerNumber);

    //addr of pointerNumber
    printf("Addr of pointerNumber: %p\n", &pointerNumber);

    //value pointerNumber refers to:
    printf("Value stored at pointer Number: %d\n", *pointerNumber);
    return 0;
}