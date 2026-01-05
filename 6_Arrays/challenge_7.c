/*Weather App*/

#include <stdio.h>
#include <stdlib.h>

#define MONTHS 12
#define YEARS 5

int main(){

    float weather[YEARS][MONTHS] = {
        {23,15,33,5,3,49,8,36,49,8,78,12},
        {45,32,16,76,49,12,35,64,49,78,13,59},
        {45,56,6,48,12,3,5,36,49,54,19,18},
        {15,45,68,89,18,35,35,3,5,56,14,5},
        {12,3,5,1,46,19,65,35,39,1,0,45}
    };

    //year avg:
    float year_total = 0;
    float year_avg=0;
    for(int i=0;i<YEARS;i++){
        for(int j= 0; j<MONTHS;j++){
            year_total+=weather[i][j];
        }
        year_avg = year_total/MONTHS;
        printf("Average for year %d is %.3f\n", i+2010, year_avg);
    }

    printf("---------------------------------------\n");
    //month avg:
    float month_total=0;
    float month_avg = 0;
    for(int i = 0; i<MONTHS;i++){
        for(int j = 0; j< YEARS;j++){
            month_total+= weather[j][i];
        }
        month_avg=month_total/YEARS;
        printf("%d has monthly average of: %.3f\n",i+1,month_avg);
    }

    return 0;
}