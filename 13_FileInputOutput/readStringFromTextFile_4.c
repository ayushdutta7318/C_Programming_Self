#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *pfile;
    char str[60];

    //open file to read
    pfile = fopen("sample.txt", "r");

    if(pfile ==NULL){
        perror("error opening file");
        return -1;
    }

    //read str
    if(fgets(str,60,pfile)!=NULL){
        printf("%s", str);
    }

    fclose(pfile);
    pfile = NULL;
    return 0;
}