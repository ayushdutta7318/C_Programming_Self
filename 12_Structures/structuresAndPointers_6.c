/*structures and pointers*/

#include <stdio.h>

struct date{
    int day, month, year;
};

int main(void){

    //decalre var to be ptr to struct
    struct date *datePtr, today;

    datePtr = &today;//stores the addres of structure todayof type date

    datePtr->day=1;
    datePtr->month=1;
    datePtr->year=2026;

    //aliter:
    (*datePtr).day = 1; // "." has higher precedence than "*"
    (*datePtr).month = 1;
    (*datePtr).year = 2026;

    printf("today is %d/%d/%d\n", (*datePtr).day, (*datePtr).month, (*datePtr).year);

    //aliter
    printf("today is %d/%d/%d\n", datePtr->day, datePtr->month, datePtr->year);
    return 0;
}