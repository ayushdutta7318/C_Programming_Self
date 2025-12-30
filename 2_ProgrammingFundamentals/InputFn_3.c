#include <stdio.h>

int main()
{
    char name[50];
    int num;
    double x;
    //take input
    printf("Enter values:\n");
    scanf("%s %d %lf", name, &num, &x); //scanf reads values unless it see a space

    //print output
    printf("\nValue enterd: %s:::::%d:::::%f\n",name,num,x);
    return 0;
}