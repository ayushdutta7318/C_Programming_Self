/*
character: in ' '
String: in " "
str len greater than len of str as last char is null code val 0.
*/

#include <stdio.h>

int main(void){
    // printf("String is terminated by \0 \n");

    //declaring str:
    char myString[5] = "ayush";
    printf("%c\n",myString[0]);
    printf("%c\n",myString[1]);
    printf("%c\n",myString[2]);
    printf("%c\n",myString[3]);
    printf("%c\n",myString[4]);

    //str input
    char myName[10];
    scanf("%s",myName);
    printf("%s\n",myName);

    //compare str:
    /*as str is char arr, so compare each char of two strings*/


    return 0;
}