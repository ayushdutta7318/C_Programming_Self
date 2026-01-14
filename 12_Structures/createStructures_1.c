/*create and use structures*/

#include <stdio.h>

int main(void){
    struct date {
        int month;
        int day;
        int year;
    };

    struct date today;
    today.day = 13;
    today.month = 1;
    today.year = 2026;

    printf("Today is %d/%d/%d\n", today.day, today.month, today.year);

    int century = today.year/100 +1;
    printf("Current Century: %d\n", century);
    return 0;
}