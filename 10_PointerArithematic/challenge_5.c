#include <stdio.h>

void strLength(const char *pstr){
    int length = 0;

    while(*pstr){//will exit at *pstr='\0'
        length++;
        *pstr++;
    }
    
    printf("Length of the string: %d\n", length);
}

//aliter
int strLength_Optimized(const char *pstr){
    printf("%d\n", pstr);//debug
    const char *lastAddress = pstr;
    while(*lastAddress){
        lastAddress++;
    }
    printf("%d\n", lastAddress);//debug
    return lastAddress -pstr;
}

int main(void){

    int i = 1;
    int *p = &i;
    printf("%p\n", p);
    printf("%d\n", *p);

    char str[] = "Hello World!";
    strLength(str);
    
    printf("%d\n", strLength_Optimized("Hello World!"));
    return 0;
}