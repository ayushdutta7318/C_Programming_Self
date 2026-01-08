#include <stdio.h>

// 1
void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
}

// 2.
int sumArr(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

// 3
int maxElArr(int arr[], int size)
{
    int max = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

// 4
int minElArr(int arr[], int size)
{
    int min = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

// 5
float avgArrEl(int arr[], int size)
{
    int total = 0;
    float avg;
    for (int i = 0; i < size; i++)
    {
        total += arr[i];
    }
    avg = total / size;
    return avg;
}


void countEvenOddArr(int arr[], int size){
    int countEven = 0, countOdd = 0;
    for(int i = 0; i<size;i++){
        if(arr[i]%2==0){
            countEven++;
        }else{
            countOdd++;
        }
    }
    printf("Even: %d\nOdd: %d\n", countEven,countOdd);
}

int main(void)
{
    // 1
    int a[] = {1, 2, 3, 4, 5};
    int s = 5;
    printArr(a, s);

    // 2
    printf("Sum: %d\n", sumArr(a, s));

    // 3
    int m[] = {45, 36, 89, 1, 0};
    int size = 5;
    printf("Max El: %d\n", maxElArr(m, size));

    // 4
    printf("Min El: %d\n", minElArr(m, size));

    //5
    printf("Average: %.3f\n", avgArrEl(m,size));

    //6
    countEvenOddArr(a,s);

    return 0;
}