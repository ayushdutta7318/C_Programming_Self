#include <stdio.h>

int main(){
    int num, sign;

    printf("Enter num: \n");
    scanf("%d", &num);

    if(num < 0){
        sign = -1; // num is -ve
    }else if(num == 0){
        sign = 0; // num is 0
    }else{
        sign = 1; //num is +ve
    }

    printf("Sign: %d\n", sign);
    return 0;
}