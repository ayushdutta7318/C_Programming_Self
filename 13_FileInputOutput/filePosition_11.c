#include <stdio.h>

int main(void){
    FILE *pfile;
    pfile = fopen("fileposition.txt", "r");
    int len;
    //error check
    if(!pfile){
        perror("error open file");
        return -1;
    }

    fseek(pfile, 0, SEEK_END);//move pointer to end of file
    len = ftell(pfile);//fseek and ftell used together

    //prinrt file len
    printf("file size: %d\n", len);

    return 0;
}

/*
Finding out where you are

you have two functions to tell you where you are in a file

ftell()

fgetpos()

long ftell(FILE *pfile);


this function accepts a file pointer as an argument and returns a long integer value that specifies the current position in the file

long fpos = ftell(pfile);


the fpos variable now holds the current position in the file and you can use this to return to this position at any subsequent time

value is the offset in bytes from the beginning of the file
*/