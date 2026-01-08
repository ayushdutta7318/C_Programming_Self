#include <stdio.h>

int main(void){
    //1Write a program to read 5 integers into an array and print them.
    int num[5] = {1,2,3,4,5};
    int i = 0;
    while(i<5){
        printf("iteration: %d, value: %d\n",i+1,num[i]);
        i++;
    }
    
    //Write a program to find the sum of elements in an array.
    int sum = 0;
    for(int i = 0;i<5;i++){
        sum+=num[i];
    }

    printf("sum: %d\n", sum);

    // Write a program to find the largest element in an array.
    int numLarge[7] ={1,0,-2,89,13,6,0};
    int max = 0;

    int j = 0;
    while(j <7){
        if (numLarge[i] > max){
            max = numLarge[j];
        }
        j++;
    }
    printf("Largest el: %d\n", max);

    // Write a program to find the smallest element in an array.
    int numSmallest[7] = {-11,-2,3,5,89,1,0};
    int min = 0;
    int k = 0;
    while(k < 7){
        if (numSmallest[k]<min){
            min = numSmallest[k];
        }
        k++;
    }
    printf("Smallest el: %d\n", min);

    //Write a program to calculate the average of array elements.
    int avgArr[7] = {2,5,7,5,39,33,10};
    float avg = 0;
    for(int i = 0;i<7;i++){
        avg += avgArr[i];
    }

    avg = avg/7;
    printf("Average: %.2f\n", avg);

    //Write a program to count how many elements are even and odd in an array.
    int evenOddArr[7] = {3,5,7,8,6,4,1};
    int countEven = 0;
    int countOdd = 0;
    for(int i =0;i<7;i++){
        if(evenOddArr[i]%2==0){
            countEven++;
        }else{
            countOdd++;
        }
    }

    printf("Even: %d, Odd: %d\n", countEven,countOdd);
    return 0;
}