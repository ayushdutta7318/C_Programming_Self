#include <stdio.h>

int main()
{
    // Type conversion
    int x = 0;
    float f = 12.25;

    x = f; // only 12 gets stored in x.
    printf("x: %d\n", x);

    int a = 12;
    float b = 0;

    b = a;
    printf("b: %f\n", b);

    // Type casting
    float sum = (int)21.45 + (int)25.78; //has highest precendence
    printf("sum: %f\n", sum);
    return 0;
}