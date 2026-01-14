/*structures containg pointers*/

#include <stdio.h>

struct intPtr {
    int *ptr1, *ptr2;
};

struct charPtr {
    char *first, *last;
};

int main(void){

    int i1 = 3, i2 = 5;

    struct intPtr pointers;
    pointers.ptr1 = &i1;//ptr1 stores addr of i1
    pointers.ptr2 = &i2;//ptr2 stores addr of i2

    printf("Value: i1: %d, i2: %d\n", *pointers.ptr1, *pointers.ptr2);

    //
    char str1[] = "a string 1";
    char str2[] = "a string 2";

    struct charPtr cPointer;

    cPointer.first = str1;
    cPointer.last = str2;

    printf("%s, %s\n", cPointer.first, cPointer.last);
    return 0;
}