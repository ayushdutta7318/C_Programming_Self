/*calloc()*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

    //calloc is more efficient, needs  2 args -> num of data and size of data
    int *pNumber = (int*)calloc(25, sizeof(int));
    printf("address of first byte: %p\n", pNumber);

    free(pNumber);
    printf("%p\n",pNumber);

    /*
    return null if memory cant be allocated
    memory intializefd to 0 B
    */
    return 0;
}