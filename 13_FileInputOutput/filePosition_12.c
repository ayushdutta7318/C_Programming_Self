#include <stdio.h>

int main(void){
    FILE *pfile;
    fpos_t position;

    pfile = fopen("fileposition.txt", "w+");

    //get position of pointer
    fgetpos(pfile, &position);//get current file position
    fputs("hello, wolrd\n", pfile);// write str to file 
    fsetpos(pfile, &position);
    //close file
    fclose(pfile);
    return 0;
}