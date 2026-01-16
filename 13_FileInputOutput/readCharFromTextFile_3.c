/*read text from fiel*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

    FILE *pfile;
    int c;

    pfile = fopen("test.txt", "r");

    if(pfile==NULL){
        perror("Error opening file");
        return -1;
    }

    //read singlr char

    while((c = fgetc(pfile)) != EOF){
        printf("%c", c);
    }

    fclose(pfile);
    pfile = NULL;

    system("pause");//you can pause the prog b4 last line of prog
    //NOTE
    int z = 65;
    printf("%c", z);//%c tells printf to treatz like ASCII and print char associate with it
    return 0;
}