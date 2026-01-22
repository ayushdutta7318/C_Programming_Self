#include <stdio.h>
#include <limits.h>

void revArr(int *arr, int size)
{
    int left = 0, right = size - 1;
    while (left < right)
    {
        // swap
        int temp = *(arr + left);
        *(arr + left) = *(arr + right);
        *(arr + right) = temp;
        left++;
        right--;
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


//2.
int secondGreatestEl(int *arr, const int size){
    int max1 = INT_MIN, max2 = INT_MIN;
    //find max
    int const *arrayEnd = arr+size;
    for(;arr<arrayEnd;arr++){
        if(*arr>max1){
            max2=max1;
            max1=*arr;
        }else if(*arr>max2 && *arr<max1){
            max2=*arr;
        }
    }
    
printf("Max: %d, 2nd Max: %d\n", max1, max2);

}

int main(void)
{
    int a[5] = {1,2,3,4,5};
    secondGreatestEl(a,5);
    return 0;
}