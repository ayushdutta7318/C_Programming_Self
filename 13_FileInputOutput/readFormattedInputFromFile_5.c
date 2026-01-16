#include <stdio.h>
#include <stdlib.h>

int main(void){
    //create file pointer:
    FILE *pfile;
    char str1[10], str2[10], str3[10];
    int year;

    pfile = fopen("file.txt", "w+");

    if(pfile == NULL){
        perror("error file opening");
        return(-1);
    }
    
    fputs("hello world how are you in 2026", pfile);
    rewind(pfile);

    //read format str
    fscanf(pfile, "%9s %9s %9s %d",str1, str2, str3, &year);
    // fgets(str3, 10, pfile);for spotting diff

    //print to o/p
    printf("Read String1 |%s|\n", str1);
    printf("Read String2 |%s|\n", str2);
    printf("Read String3 |%s|\n", str3);
    printf("Read year |%d|\n", year);

    //close file
    fclose(pfile);
    pfile = NULL;

    return 0;
}