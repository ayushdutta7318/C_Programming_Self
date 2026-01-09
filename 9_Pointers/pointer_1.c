/*pointer intro*/

#include <stdio.h>

int main(void){
    //declaring pointer
    int number = 99;
    int *pointerNumber = &number;
    printf("the pointer to %d is %d\n", number, *pointerNumber);

    int num = 25;
    int *point = &num; //& is the addressof operator, * is indirection operator
    printf("%d\n", point);

    return 0;
}