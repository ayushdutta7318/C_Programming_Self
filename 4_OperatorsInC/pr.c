#include <stdio.h>

int main(){
    int x = 1, y = 0, z = 5;
    int a = x && y && z++;
    printf("%d\n", z);

    short int i = 20;
    char c = 97;
    printf("%d,%d,%d\n", sizeof(i), sizeof(c), sizeof(c+1));
    return 0;
}