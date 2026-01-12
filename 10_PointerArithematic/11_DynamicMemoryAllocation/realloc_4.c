/*realloc*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char *str;

    str = (char *)malloc(15);
    strcpy(str, "abcde");
    
    printf("String: %s, Address: %p\n", str, str);

    //using realloc
    str = (char *)realloc(str,25*sizeof(char));
    strcat(str,".com");
    printf("String: %s, Address: %p\n", str, str);
    
    //free up str
    free(str);
    
    return 0;
}

/*
realloc() fn help you reuse memory allocated by malloc, calloc.
expect 2 args-> pointer from prev allocation by malloc or calloc, and new memory to be allocated
transfers content of prev allocated emomory to newly allocated memory
*/