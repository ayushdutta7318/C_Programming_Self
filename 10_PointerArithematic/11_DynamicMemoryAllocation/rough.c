#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
    char str[] = "hello world";
    char *pString = str;
    
    printf("String: %s, Address: %p\n", pString, pString);
    printf("String: %s\n", *pString);
    return 0;
}