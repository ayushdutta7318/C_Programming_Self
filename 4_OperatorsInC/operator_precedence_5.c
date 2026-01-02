#include <stdio.h>

int main()
{
    // precedence:
    int a = (7 + 3) * 5;
    printf("result: %d\n", a);

    // associativity: all abt relation operator
    _Bool b = (1 == 2) != 3;
    printf("%d\n", b);
    return 0;
}