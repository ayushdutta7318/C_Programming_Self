/*aliter for declarign struct var*/

#include <stdio.h>

int main(void)
{
    struct date
    {
        int day, month, year;
    } today;//declaring struct date var just after finishing struct date

    today.day = 13;
    today.month = 1;
    today.year = 2026;

    int century = today.year / 100 + 1;
    printf("today is: %d/%d/%d, century: %d\n", today.day, today.month, today.year, century);

    //aliter

    struct date tomorrow = {14,1,2026};
    printf("Tomorrow: %d-%d-%d\n", tomorrow.day, tomorrow.month, tomorrow.year);

    //aliter: assignment with compund literal
    struct date yesterday;
    yesterday = (struct date){12,1,2026};
    //aliter
    yesterday = (struct date){.day=12, .month=1, .year=2026};
    printf("%d-%d-%d\n", yesterday.day, yesterday.month, yesterday.year);
    return 0;
}