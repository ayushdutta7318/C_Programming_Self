/*input pointer notation*/

#include <stdio.h>

int arraySum(int *array, const int n){
    int sum = 0;
    int * const arrayEnd = array + n;

    for(;array<arrayEnd;array++){
        sum += *array;
    }
    return sum;
}
int main(void){

    int a[5] = {1,2,3,4,5};
    printf("Sum: %d\n", arraySum(a,5));

    // summary:

    int urn[3];
    int *ptr1, *ptr2;

    // valid arithematic operations:
    ptr1=ptr1+1;
    ptr1=ptr2+1;
    ptr2=ptr1+2;
    ptr1++;
    ptr2++;
    ptr2=urn+1;

    /*invalid operatioon
    ptr2=urn*ptr1;
    */
    return 0;
}

/*
functions that process arrays actually use pointers as arguments

you have a choice between array notation and pointer notation for writing array-processing functions
*/