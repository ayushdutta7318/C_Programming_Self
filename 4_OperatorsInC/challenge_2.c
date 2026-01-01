#include <stdio.h>

int main(){
    //take minutes from user:

    double minutes;
    printf("enter minutes:\n");
    scanf("%lf", &minutes);

    double days = minutes/1440;
    double years= minutes/(24*60*365);

    printf("Number of days: %g\n", days);
    printf("Number of years: %g\n", years);

    return 0;
}