#include <stdio.h>

int main(){
    int a = 10;
    int b = 5;
    int result = 0;
    result = a+b;
    printf("%d\n", result);

    result = a/5;
    printf("%d\n", result);

    result = a %b;
    printf("%f\n", result);

    printf("%d\n", ++a);
    printf("%d\n", --a);
    printf("%d\n", a++);
    printf("%d\n", a--);
    printf("%d\n", a);

    _Bool c = 1;
    _Bool d = 0;
    _Bool result_ = 1;

    printf("------------------------------------\n");
    result_ = c && d;
    printf("%d\n", result_);

    result_ = c||d;
    printf("%d\n", result_);

    result_ = !(c||d);
    printf("%d\n", result_);

    return 0;
}