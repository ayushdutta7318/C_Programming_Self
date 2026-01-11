/*Pointer and array*/

#include <stdio.h>

int main(void){
    int arr[5] = {3,5,1,7,9};
    int *ptr = arr;

    printf("arr addr: %p\n", (void*)ptr);//address of 1st arr el
    printf("first arr el: %d\n", *ptr);//first arr element

    //if we have to find arr[3];
    printf("arr 3rd element: %d\n",*(ptr+3));//3rd arr elements

    ptr = &arr[1];//storing addr of arr[1] in ptr
    printf("addr second el: %p\n",ptr);
    printf("%d\n", *ptr);
    return 0;
}