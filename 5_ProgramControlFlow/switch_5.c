/*Switch statement in c*/

#include <stdio.h>

void main(){
    printf("Switch statement lecture\n");

    enum weekday {monday, tuesday,wednesday,thursday, friday, saturday, sunday};
    enum weekday today = wednesday;

    switch (today)
    {
    case monday:
        printf("today is monday\n");
        break;
    
    case tuesday:
        printf("today is monday\n");
        break;
    
    case wednesday:
        printf("today is wednesday\n");
        break;
    
    case thursday:
        printf("today is thursday\n");
        break;
    
    case friday:
        printf("today is friday\n");
        break;

    case saturday:
        printf("today is saturday\n");
        break;
    
    case sunday:
        printf("today is sunday\n");
        break;
    
    default:
        printf("invalid day\n");
        break;
    }


    float val1, val2;
    char operator;

    printf("val1: \n"); //donrt write \n in scanf
    scanf("%f", &val1);

    printf("val2: \n");
    scanf("%f", &val2);

    printf("operator: \n");
    scanf(" %c", &operator);

    switch(operator){
        case '+':
            printf("%.2f\n", val1 + val2);
            break;

        case '-':
            printf("%.2f\n", val1-val2);
            break;

        case '*':
            printf("%.2f\n", val1*val2);
            break;
        
        case '/':
            printf("%.2f\n", val1/val2);
            break;

        default:
            printf("invalid operator\n");
            break;
    }
}


/*
Syntax:

switch syntax

switch ( expression )
{
    case value1:
        program statement
        ...
        break;

    case valuen:
        program statement
        program statement
        ...
        break;

    default:
        program statement
        ...
        break;
}

*/