#include <stdio.h>

int main(void){
    FILE *pfile;
    pfile = fopen("fileposition.txt","w+");
    int len;

    fputs("hello wolrd ayush\n",pfile);
    fseek(pfile, 7, SEEK_CUR);//move 7 B from beginning
    fputs("how are you",pfile);

    len = ftell(pfile);//tells current postion
    printf("%d\n", len);

    //close file
    fclose(pfile);
    return 0;
}