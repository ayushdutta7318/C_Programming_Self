#include <stdio.h>

// enum and char
void main(){
    enum primaryColor {red,yellow,blue};
    enum primaryColor myColor, gregsColor;
    myColor = red;

    //or:

    enum months {Jan, Feb,Mar,Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};
    enum months currentMonth;
    currentMonth = Dec;

    printf("%d\n", currentMonth);

    enum gender {male,female,trans};
    enum gender myGender;
    myGender = male;
    printf("%d\n", myGender);
}