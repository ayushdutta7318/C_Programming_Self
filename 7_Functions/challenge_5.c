#include <stdio.h>
#include <math.h>

//1
int gcd(int a, int b){
    while(b!=0){
        int temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}

//2
float absoluteVal(float a){
    int result = a >=0 ? a : -a;
    return result;
}

//3
float sqrt_newton(float n){
    float x = n;
    float y = 1;
    float e = 0.000001f;

    while((x-y)>e){
        x = (x+y)/2;
        y = n/x;
    }

    return x;
}

int main(void){
    int x=33,y=63;
    printf("GCD: %d\n", gcd(x,y));

    int a = -2;
    printf("Absolute val: %.1f\n", absoluteVal(a));

    float h = 25;
    printf("square root of %.3f is %.3f",h,sqrt_newton(h));

    return 0;
}