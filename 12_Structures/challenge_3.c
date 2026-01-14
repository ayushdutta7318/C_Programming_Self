/*challenge*/

#include <stdio.h>

int main(void){

    struct employee{
        char *name;
        int hireDate;
        float id;
    };

    struct employee suresh = {"suresh mehta", 19, 123.456f};
    printf("name: %s, hireDate: %d, id: %.3f\n", suresh.name, suresh.hireDate, suresh.id);
    return 0;
}