/*Nested loop*/

#include <stdio.h>

int main(){

    for(int i = 0; i<=5;i++){
        for(int j = 0; j<=5;j++){
            printf("i: %d, j: %d\n", i,j);
        }
        printf("-----------------------------\n");
    }
    
    return 0;
}