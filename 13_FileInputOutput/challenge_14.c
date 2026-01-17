#include <stdio.h>

int main(void){
    FILE *fp;
    fp = fopen("ayush5.txt", "r");
    int position;
    char ch;

    //error chk
    if(!fp){
        perror("error open fiel");
        return -1;
    }

    fseek(fp,0,SEEK_END);//move pointer to end
    position = ftell(fp);

    while(position>0){
        position--;
        fseek(fp,position, SEEK_SET);//update pointer to one posn back
        ch = fgetc(fp);
        putchar(ch);
    }

    //close file
    fclose(fp);
    fp = NULL;
    return 0;
}