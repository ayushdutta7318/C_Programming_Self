#include <stdio.h>

//for creating const str, we have 3 ways
//method 1: using #define preprocessor directive
#define myStr "ayush"

int main(void){
    printf("Value of myStr is: %s\n", myStr);

    //method 2: const
    const char name[12] = "ayush dutta";
    printf("%s\n", name);

    //method 3: enums:
    return 0;
}