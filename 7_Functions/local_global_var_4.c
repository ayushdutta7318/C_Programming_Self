/*
local and global var

local var: var inside fn
global: var outisde fn

avoid global var: dificult to find bug
*/

#include <stdio.h>

int a = 3;
int main(void){
    printf("value of a is %d\n", a);

    //local var with same name as global var:
    int a = 5;
    printf("value of local a is: %d\n", a);
    return 0;
}