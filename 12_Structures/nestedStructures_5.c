/*nested structures*/

#include <stdio.h>

struct date
{
    int mont, day, year;
};

struct time
{
    int hours, min, seconds;
};

int main(void)
{
    struct dateAndTime
    {
        struct date sdate;
        struct time stime;
    };

    //accessing values

    struct dateAndTime now = {.sdate={.day=1,.mont=1, .year=2026},.stime={.hours=10, .min=19,.seconds=19}};

    //can also declare array
    struct dateAndTime myDates[10];
    return 0;
}