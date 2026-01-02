// if -else-elseif

#include <stdio.h>

int main()
{

    int age;
    printf("Enter age:\n");
    scanf("%d", &age);

    if (age > 18) // simple if can be wrriten w/o bracket
    {
        printf("You can drive\n");
    }
    else
    {
        printf("you can't drive\n");
    }

    return 0;
}