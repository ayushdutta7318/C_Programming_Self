#include <stdio.h>

int main(){
    //unsigned int means only +ve value in the var.
    unsigned int a = 60; //0011 1100
    unsigned int b = 13; //0000 1101
    int result = 0;

    result = a & b;
    printf("result is: %d\n", result);

    result = a | b;
    printf("result: %d\n", result);

    result = a ^ b;
    printf("result: %d\n", result);

    result = a << 2;
    printf("result: %d\n", result);

    //if we shift to right, bitwise right, and there are not enough digits in rhs, bits get frop off. eg in above, a = 60, if we write a >> 4, bits drop of.
    return 0;
}