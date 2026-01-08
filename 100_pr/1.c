/*Practice session*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    // q1
    int a = 3;
    float b = 3.5f;
    char c = 'a';
    printf("Value of int is: %d\nValue of float is: %0.3f\nValue of char is: %c\n", a, b, c);

    //q2
    int user_num;
    printf("Enter num: \n");
    scanf("%d", &user_num);
    int sq = user_num*user_num;
    printf("Square of %d is: %d\n",user_num,sq);

    //q3
    float n1 = 3.45f;
    float n2 = 2.79f;
    float sum = n1 +n2;
    float avg = (n1+n2)/2;
    printf("sum of %.3f and %.3f is: %.3f\nand their avg is: %.3f\n", n1,n2,sum,avg);

    //q4
    char label = 'c';
    int x = label;
    printf("The ascii value of %c is: %i\n", label, x);

    //q5
    float pi = 3.1416f;
    float radius;
    printf("Enter radius: \n");
    scanf("%f", &radius);

    float area = pi * radius *radius;
    printf("Area of the circle with radius %.4f is: %.4f\n", radius,area);

    return 0;
}