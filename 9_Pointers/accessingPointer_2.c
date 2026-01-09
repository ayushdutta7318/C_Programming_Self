#include <stdio.h>

int main(void){
    //accessing pointers
    int number = 3;
    int *pointerNumber = &number;

    //printing address of number var
    printf("The address of %d is: %p\n", number, pointerNumber);
    //addr changes bcz of ASLR

    //access value in number var using pointer:
    printf("The val of var number is: %d\n", *pointerNumber);
    int result = 0;
    result = *pointerNumber + 5;
    printf("Result var: %d\n", result);

    //pointer is 8 bytes, but we used %d which expect 4 byte int. so use %p to print addr.
    printf("The address of %d is : %p\n", number, pointerNumber);

    /*
    pointer * = 8 byte on 64 bit os
    1 hexadec digit = 4 bit => 16 hexdec digit = 64 bit, hence pointer can store memory addr. memory addr = 16 hexadec digit.

    🧠 What does “32-bit” or “64-bit” OS mean?
    👉 It refers to the size of memory addresses the CPU and operating system use.
    */

    //cast to void (void*) is used to avoid compiler error
    printf("number's addr: %p\n", (void*)pointerNumber);

    //&pointerNumber is addr of pointerNumber Variable itself, not number addr.
    printf("number's addr: %p\n", &pointerNumber);

    //Example:

    int num = 5;
    int *pNum=NULL;

    //addr of num
    printf("num's addr: %p\n", &num);

    //aliter
    pNum = &num;
    printf("num's addr: %p\n", pNum);
    //safe way aliter
    printf("num's addrs safe: %p\n",(void*)pNum);
    //sizeof addr:
    printf("pNum size: %zd\n", sizeof(pNum));
    //value stored at pNum addr
    printf("value stored at pNum: %d\n", *pNum);
    return 0;
}