/*Find Prime Numbers from 3 to 100*/

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(){
//prime arr
    int prime_arr[50] = {};
    prime_arr[0] = 2;
    prime_arr[1] = 3;
    //check boolean prime
    bool isPrime;
    int primeIndex = 2;

    //loop check prime
    for(int prime = 5; prime<=100;prime+=2){
        isPrime = true;
        for(int j = 1; isPrime && prime/prime_arr[j] >=prime_arr[j];j++){
            if(prime%prime_arr[j]==0){
                isPrime = false;
            }
        }
         if(isPrime==true){
            prime_arr[primeIndex] = prime;
            primeIndex++;
        }
    }

    //print prime num arr:
    for(int k = 0; k<50;k++){
        printf("%d ",prime_arr[k]);
    }
    
    

    return 0;
}