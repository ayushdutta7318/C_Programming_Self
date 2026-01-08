#include <stdio.h>

//Write a program to copy elements from one array to another.

void cpyArr(int src[5], int des[5]){
    for(int i = 0;i<5;i++){
        des[i] = src[i];
    }

    //prionting cpied arr:
    for(int i = 0; i< 5;i++){
        printf("%d ", des[i]);
    }
}

// Write a program to reverse an array.
void revArr(int src[5], int des[5], int size){
    int i = 0, j = 0;
    while(i< size){
        i++;
    }
    printf("%d\n", i);

    while(j<size){
        des[j] = src[i-1];
        i--;
        j++;
    }

    //print rev arr:
    for(int i = 0; i< size;i++){
        printf("%d ", des[i]);
    }
    printf("\n");

}

//Write a program to search for an element in an array (linear search).

int linearArr(int arr[], int size, int target){
    if(size ==0){
        return size;
    }

    int i = 0;
    while(i<size){
        if(arr[i] == target){
            return 1;
        }
        i++;
    }
    return 0;
}


//sort arr

int sort(int arr[7]){
    for(int i = 1;i< 7;i++){
        for(int j =0; j<i;j++){
            if(arr[j]>arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    for(int i = 0;i<7;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

//duplicate arr el:
int duplicate(int arr[9]){
    int count = 0;

    for(int i = 1; i<9;i++){
        for(int j = 0; j<i; j++){
            if(arr[j] == arr[i]){
                count++;
                break;
            }
        }
    }
    return count;
}

int main(void){

    int src[5] = {1,2,3,4,5};
    int des[5] = {};
    cpyArr(src,des);

    //rev arr
    int s[5] = {1,2,3,4,5};
    int d[5] = {};
    int size = 5;
    revArr(s, d, size);

    //linear serch
    int si = 8;
    int num[8] = {3,5,78,9,-11,0,4,1};
    int target = 78;

    printf("%d\n", linearArr(num, si, target));

    //sort
    int sortArr[7] = {89,3,5,-11,-2,78,45};
    sort(sortArr);

    int y[7] = {3,3,5,1,1,9,7};
    sort(y);

    //duplicate
    int z[9] = {3,3,5,1,1,9,7,7,7};
    printf("Duplicate el: %d\n", duplicate(z));
    return 0;
}