/*using pointers*/

#include <stdio.h>

int main(void){
    int number = 5;
    int *pNumber = NULL;
    printf("%p\n", (void*)pNumber);
    // printf("%d\n", *pNumber);//undefined behvior, will crash prog
    

    //reassignment can be done with pointers:
    pNumber = &number;
    printf("%p\n", (void*)pNumber);
    printf("%p\n", *pNumber);

    *pNumber += 5;
    printf("Added value of pointer value: %d\n", *pNumber);

    //we can store addr of any var of type int inside pNumber pointer. initially, *pNumber = &number, now  below,
    int newNumber = 999;
    pNumber = &newNumber;
    printf("NewAddr: %p\n", (void*)pNumber);
    printf("NewNumber: %d\n", *pNumber);

    //Example

    long num1 = 0L;
    long num2 = 0L;
    long *pNum = NULL;

    pNum = &num1;
    *pNum = 2L;
    ++num2;
    num2+=*pNum;
    pNum = &num2;
    ++*pNum;

    printf("num1= %ld, num2= %ld, *pnum = %ld, *pNum + num2 = %ld\n", num1, num2, *pNum, *pNum + num2);

    //BIG ERROR
    int *p;
    *p = 5;//dont ever do this bcz 5 is placed ina random memory, bcz p points to nowhere

    return 0;
}

/*
1. we can assign address to pointers
2. we can do arithemeatic with pointer
3. when receiving Input:

when we have used scanf() to input values, we have used the & operator to obtain the address of a variable

on the variable that is to store the input (second argument)

when you have a pointer that already contains an address, you can use the pointer name as an argument for scanf()

*/