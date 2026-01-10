/*using const with pointers*/

#include <stdio.h>

int main(void){
    long value = 999L;
    const long *pvalue = &value;
    //debug
    printf("value: %ld\n", value);
    printf("value addr: %p\n", (void*)pvalue);
    printf("value by pointer: %ld\n", *pvalue);

    //addr of pointer pvalue:
    const long **addrOfPointer = &pvalue;// ** bcz addr of a pointer which points to some addr.
    printf("addr of the pointer: %p\n", (void*)addrOfPointer);

    //we can still modify value var, bcz var isnt const:
    value = 777L;

    //also, we can modify pvalue pointer as weel, bcz pointer is not const, it is pointing to const long * whihch is const

    long newValue = 555L;
    pvalue = &newValue;
    printf("newValue: %ld\n", newValue);
    printf("newValue addr: %p\n", (void*)pvalue);
    printf("newValue's value by pointer: %ld\n", *pvalue);

    //how to define const pointer:
    int num = 3;
    int *const pnum = &num;
    printf("value of num by pointer: %d\n", *pnum);
    printf("addr of num: %p\n", (void*)pnum);

    int newNum = 333;
    // pnum = &newNum;//error

    //but you can do
    *pnum = 303;
    printf("new value: %d\n", *pnum);
    return 0;
}