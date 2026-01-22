/*Pointer and str*/

#include <stdio.h>
#include <string.h>

void main(void){

    
    char multiple[] = "a string";
    char *p=multiple;
    //debug
    printf("addr of str 1st el: %p\n", (void*)p);//print addr of str 1zt el
    printf("addr of str 1st el: %p\n", (void*)(p+1));//----"----
    printf("addr of str 1st el: %p\n", (void*)(p+2));//----"----
    printf("str el 1: %c\n", *p);//print first str el
    printf("str el 1: %c\n", *(p+1));//----"----
    printf("str el 1: %c\n", *(p+2));//----"----

    //str len
    printf("%d\n", strlen(multiple));

    int i;
    for(i=0;i<strlen(multiple);i++){
        printf("Str el number: %d, el: %c, addr: %p\n",i+1,*(p+i), (p+i));
    }
}