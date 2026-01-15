#include <stdio.h>

//5 vla
void readVla(void){
    int n;
    scanf("%d", &n);

    int arr[n];

    //store data in vla
    for(int i = 0; i<n;i++){
        arr[i] = (i+1)*3;
    }

    //read vla
    for(int i = 0; i< n; i++){
        printf("i value: %d, %d\n", i+1, arr[i]);
    }
}

int main(void){
    // What is an array in C? How is it different from variables?
    /*Array is a data structure in which we can store multiple values in a single var. arrsy are fixed in size and datatype must be same*/

    //declare array,,
    int array[10] = {1,2,3,4,5,6,7,8,9,10};

    //default value of arr el: 0
    for(int i =0; i< 10;i++){
        printf("%d ", array[i]);
    }
    printf("");
    //arr index out of bounds
    printf("%d\n", array[100]);

    //vla
    readVla();

    //more el than arr size
    int a[3] = {1,2,3,4,5};
    return 0;
}