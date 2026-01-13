#include<stdio.h>

#include<stdlib.h>

#include<string.h>



void main()

{

    char *p,*q;

    p=(char*)malloc(3*sizeof(char));

    q=p;



    strcpy(p,"hello");

    printf("p=%s",p);

    printf("q=%s",q);



    free(q);



    q=NULL;



    printf("%s",p);

    printf("%s",q);

}