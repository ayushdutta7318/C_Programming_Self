#include <stdio.h>

// removing element from array. we have 4 scenarios in this:

/*1. remove by index */

int removeArrayElByIndex(int *arr, int size, const int position)
{
    if (size == 2)
    {
        return *arr > *(arr + 1) ? *arr : *(arr + 1);
    }

    int const *arrayEnd = arr + size;
    for (int i = position; i < size; i++)
    {
        *(arr + i) = *(arr + i + 1);
    }
    size--;

    // print new array:
    for (int index = 0; index < size; index++)
    {
        printf("%d ", *(arr + index));
    }
    printf("\n");
}

/*2. remove element by it s value. same as above we just need to find the index*/

void removeElementByValue(int *arr, const int value, int size)
{
    int found = -1;

    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) == value)
        {
            found = i;
            break;
        }
    }

    // remove el by index
    for (int index = found; index < size; index++)
    {
        *(arr + index) = *(arr + index + 1);
    }
    size--;

    // print array:
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

// 3. so far we remove only one occurence, now remove all occurence

void removeAllOccurence(int *arr, int size, int value)
{
    int write = 0;

    for (int read = 0; read < size; read++)
    {
        if (arr[read] != value)
        {
            arr[write] = arr[read];
            write++;
        }
    }

    // print new arr:
    for (int i = 0; i < write; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// alite abve pointer:

void removeAllOccurencePointer(int *arr, int size, const int value)
{
    int *write = arr;
    int const *arrayEnd = arr + size;
    for (int *read = arr; read < arrayEnd; read++)
    {
        if (*read != value)
        {
            *write = *read;
            write++;
        }
    }

    for (int *i = arr; i < write-1; i++)
    {
        printf("%d ", *i);
    }
    printf("\n");
}

int main(void)
{
    int a[5] = {1, 2, 3, 4, 5};
    removeArrayElByIndex(a, 5, 1);

    int b[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int value = 2;
    removeElementByValue(b, value, size);

    int c[6] = {1, 2, 3, 2, 4, 2};
    removeAllOccurence(c, 6, 2);
    // aliter
    removeAllOccurencePointer(c, 6, 2);
    return 0;
}