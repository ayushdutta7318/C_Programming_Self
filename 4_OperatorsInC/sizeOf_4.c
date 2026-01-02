#include <stdio.h>

int main(){

    int a = 5;
    printf("%zd\n", sizeof(a));
    printf("%zd\n", sizeof(double));
    printf("%zd\n", sizeof(long double));
    printf("%zd\n", sizeof(long));
    printf("%zd\n", sizeof(long long));
    printf("%zd\n", sizeof(float));
    printf("%zd\n", sizeof(char));
    return 0;
}