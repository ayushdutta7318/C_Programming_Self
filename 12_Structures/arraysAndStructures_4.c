/*structures and arrays*/

#include <stdio.h>

struct date{
    int day, month, year;
};

int main(void){
    //if you wanna 10 dates and each date is struct

    struct date myDates[10];
    myDates[0].day = 13;
    myDates[0].month = 1;
    myDates[0].year = 2026;

    //via loop
    int day=0, month=1, year=2026;
    for(int i = 0; i< 10;i++,day++){
        myDates[i].day = day+1;
        myDates[i].month = month;
        myDates[i].year = year;
    }

    int i = 0;
    while(i<10){
        printf("%d/%d/%d\n", myDates[i].day, myDates[i].month, myDates[i].year);
        i++;
    }


    //aliter
    struct date mydates[10]= {{1,1,2026}, {2,1,2026},{3,1,2026}};

    //structure containing arrays
    struct data {
        char name[10];
        int id;
    };

    struct data aName= {.name[0]='a', .name[1]='y', .name[2]='z', .id=12345};
    return 0;
}