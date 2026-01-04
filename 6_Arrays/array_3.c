/*Initializeing arrya:*/

#include <stdio.h>

void main(){
    //initialze arr:
    int counter[5] = {};

    printf("enter value in arr: \n");
    for(int i = 0; i<5;i++){
        printf("value entering in arr\n");
        scanf("%d", &counter[i]);//assign val to arr
    }

    for(int j =0;j<5;j++){
        printf("%d\n", counter[j]);
    }


    int num[500] = {1,2,3};//remaining el set to 0.

    //specific element set in arr
    float sample_data[100] = {[3]=555, [0] = 45, [1]=3};
    printf("%f\n", sample_data[0]);
    printf("%f\n", sample_data[3]);
    printf("%f\n", sample_data[1]);
}