#include <stdio.h>
#include <stdlib.h>

int main(void){
    //pointer to file
    FILE *pfile;

    pfile = fopen("ayush3.txt", "w+");

    fprintf(pfile, "%s %s %s %d\n", "i am ayush", "nsjkdfnk", "hellow world", 555);

    //take user i/p
    char *str = (char *)malloc(100 * sizeof(char));
    printf("enter str\n");
    scanf("%s", str);
    //write to file
    fprintf(pfile, "%s\n", str);

    fclose(pfile);
    pfile = NULL;
    return 0;
}