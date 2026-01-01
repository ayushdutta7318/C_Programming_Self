#include <stdio.h>

/*format specifier: %d, %c, %f,%e,%s, etc.*/

int main()
{
    int sum = 19;
    int i = 5;
    float floatVar = 334.15;
    double doubleVar = 8.31e+12;
    char a = 'a';
    _Bool booleanVar = 1;
    char b[50] = "ayush"; // char array(later)
    float f = 45.456123168135;

    printf("%d\n", sum);
    printf("%i\n", i);
    printf("%f\n", floatVar);
    printf("%e\n", doubleVar);
    printf("%g\n", doubleVar);
    printf("%c\n", a);
    printf("%i\n", booleanVar);
    printf("%s\n", b);

    // printing all format specifier in one line
    printf("%d %i %f %e %g %c %i %s\n", sum, i, floatVar, doubleVar, doubleVar, a, booleanVar, b);

    printf("%.3f\n", f);

    return 0;
}