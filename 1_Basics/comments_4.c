#include <stdio.h>

/*multi line cmt*/
// single line cmt

int main()
{
    // declare name char array
    char name[50];

    // take i/p of name from user
    printf("Enter name:\n");
    scanf("%s", &name);

    // print user inp
    printf("Entered name: %s", name);
    return 0;
}