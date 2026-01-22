#include <stdio.h>

void copyStr_1(char to[], char from[]){
    int i;
    for(i=0; from[i]!='\0';i++){
        to[i] = from[i];
    }
    to[i] = '\0';
}

void copyStr_2Pointer(char *to,char *from){
    for(; *from!='\0';from++,to++){
        *to = *from;
    }
    *to = '\0';
}

void copyStr_Optimized(char *to,char *from){
    while(*from){//will jump out when *from ='\0', bcz '\0' points to 0.
        *to++ = *from++;
    }
    *to='\0';
}

int main(void){
    char str[] = "A string to be copied";
    char str2[30];
    copyStr_Optimized(str2,str);
    return 0;
}

/*
char arrays as pointers

• if you have an array of characters called text, you could similarly define a pointer to be used to point to elements in text

char *textPtr;


• if textPtr is set pointing to the beginning of an array of chars called text

++textPtr;


• the above sets textPtr pointing to the next character in text, which is text[1]
*/