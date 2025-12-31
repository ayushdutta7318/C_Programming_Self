#include <stdio.h>

void main(){
    int integerVar = 5;
    float floatVar = 125.55f;
    double doubleVar = 55.55555555e10;
    _Bool booleanVar = 1;
    short shortVar = 145;
    
    printf("%d %f %e %d %d", integerVar,floatVar,doubleVar, booleanVar,shortVar);
}