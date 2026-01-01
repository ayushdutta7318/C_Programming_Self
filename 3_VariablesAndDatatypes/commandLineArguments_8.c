#include <stdio.h>

int main(int argc, char *argv[]){

    int numberOfArguments = argc;
    char *argument_1 = argv[0];
    char *argument_2 = argv[1];

    printf("Number of arguments: %d\n", numberOfArguments);
    printf("Arg 1 is program name: %s\n", argument_1);
    printf("Arg 2 is command line: %s\n", argument_2);

    int x = 97;
    char y = x;

    printf("%c\n", y);

    return 0;
}