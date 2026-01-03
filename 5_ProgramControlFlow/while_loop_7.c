/*while and do-while loop*/

#include <stdio.h>

int main()
{

    // 1. while loop: used when we dont know when loop ends. eg. dice roll, coin toss
    int i = 0;
    while (i <= 5)
    {
        printf("%d\n", i);
        i++;
    }

    // 2.do-while loop: runs atleast once, then check condition
    printf("---------------------------\n");
    int j = 0;
    do
    {
        printf("%d\n", j);
        j++;
    } while (j <= -1);// though 0>-1, loop ran atleast once.
    return 0;
}