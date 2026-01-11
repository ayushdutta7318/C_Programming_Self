/*sum of arr el*/

#include <stdio.h>

int arraySum(int array[], const int n){
    int sum = 0, *ptr;
    int *const arrayEnd = array+n;

    for(ptr=array; ptr<arrayEnd; ptr++){
        sum += *ptr;
    }

    return sum;
}

int main(void){
    int array[10] = {5,3,7,9,0,-2,-11,15,9,19};
    int n = 10;
    printf("Sum: %d\n", arraySum(array,n));
    return 0;
}