/*for loop*/

#include <stdio.h>

int main()
{
    // syntax:

    for (int i = 0; i <= 5; i++)
    {
        printf("%d\n", i);
    }

    // for loop with multiple var
    for (int i = 0, j = 1; i <= 5, j <= 10; i++, j += 1) // only last condition j<=10 will be implemented
    {
        printf("i: %d, j: %d\n", i, j);
    }

    //sum of entered int
    int sum = 0LL;
    int count = 0;

    printf("Enter count of int: \n");
    scanf("%d", &count);

    for(int i = 1; i<=count;i++){
        printf("%d\n", i);
        sum += i;
    }

    printf("%d\n", sum);

    //when there is no update that takes var closer to condition, infinite loop

    return 0;
}