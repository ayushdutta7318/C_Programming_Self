/*
Arrays: data sturcture(container) to store multiple data values of same datatype in a single var.

arr size is fixed in c

arr index start at 1 and ends at arr_length -1.
access arr element: arr_name[3].
*/

#include <stdio.h>

int main(){

    // declare arr:
    int numbers[10] = {1,2,3,4,5,6,7,8,9,0};
    printf("%d\n",numbers[4]);//accessing arr el

    //iteration over arr
    for(int i = 0; i<10;i++){
        printf("%d\n", numbers[i]);
    }
    return 0;
}