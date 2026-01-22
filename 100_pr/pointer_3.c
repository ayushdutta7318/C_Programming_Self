#include <stdio.h>
#include <string.h>

int arraySum(int *arr, const int n){
    int sum =0;
    int * const arrayEnd = arr+n;
    for(;arr<arrayEnd;arr++){
        sum+= *arr;
    }
    return sum;
}

int lenStr(char *str){
    int count = 0;
    while(*str){
        count++;
        str++;
    }
    return count;
}

void copyStr_pointer(char *to, char *from){
    char *original = to;
    while(*from){
        *to++ = *from++;
    }
    *to='\0';

    printf("%s\n", original);
}

void main(void){
    char myStr[] = "I am a string";
    char *pStr = myStr;

    // printf("Addr of 1 el: %p\n", pStr);
    // printf("Addr of 2 el: %p\n", pStr+1);
    // printf("Addr of 3 el: %p\n", pStr+2);

    // printf("Addr of 1 el: %c\n", *pStr);

    for(int i = 0; i<strlen(myStr);i++){
        printf("Addr of %c: %p\n", *(pStr+i), (pStr+i));
    }

    char myName[] = "ayush";
    printf("len: %d\n", lenStr(myName));

    char to[100];
    copyStr_pointer(to, myStr);

    char str[] = "hello wolrd";
    char *p = str;
    printf("%s", p);
}