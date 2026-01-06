/*Var length array*/

#include <stdio.h>

int main()
{
    int length;
    scanf("%d", &length);

    int arr[length];

    for (int i = 0; i < length; i++)
    {
        arr[i] = i + 1;
    }

    for (int i = 0; i < length; i++)
    {
        printf("%d\n", arr[i]);
    }

    // other way
    int arr_2[sizeof(long) + 1];
    printf("%zu\n", sizeof(int));

    for (int i = 0; i < sizeof(long) + 1; i++)
    {
        printf("%i\n", arr_2[i]);
    } // o/p is not all 0s, bcz some memory locations have 0, while other have leftover data from previoius fn calls.

    int a[10];
    printf("%d\n", sizeof(a)); // 40 bcz, int = 4 bytes, 10 elements 
    printf("%zu\n", sizeof(int));


    return 0;
}