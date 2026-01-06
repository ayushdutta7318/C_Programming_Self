/*fn returning data*/

#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main(void)
{
    printf("%d\n", add(5, 5));

    int addition = add(5,5);
    printf("addition is: %d\n", addition);
    return 0;
}

/*
void means no data will be return.

void fn_name(p1,p2,p3,....,){
//statement
}
*/