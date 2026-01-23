#include <stdio.h>


void removeDuplicateEl(int *arr, int size){
    //1.sort arr:
    for( int i = 1; i<size;i++){
        for(int j = 0; j<i; j++){
            if(*(arr+i)<*(arr+j)){
                int temp = *(arr+i);
                *(arr+i) = *(arr+j);
                *(arr+j) = temp;
            }
        }
    }
    //debug
    for(int i = 0; i<size;i++){
        printf("%d ", *(arr+i));
    }
    printf("\n");

    //remove duplicate:
    for(int i = 0; i<size;i++){
        if(*(arr+i) == *(arr+i+1)){
            *(arr+i) = *(arr+i+1);
        }
    }
}

int main(void){
    int a[] = {5,1,3,2,2,6,6,4};
    removeDuplicateEl(a, 8);

    return 0;
}