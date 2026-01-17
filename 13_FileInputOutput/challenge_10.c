#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void){
    //pointer to file:
    FILE *pfile;
    pfile = fopen("challenge10.txt", "r");

    //str to store char
    char *str = (char *)malloc(300 * sizeof(char));


    //error check

    if(!pfile){
        perror("error open file");
        return 1;
    }
    //read str
    fgets(str,300,pfile);
    printf("%s\n", str);

    // convbert to upper
    for(int i=0; str[i] !='\0'; i++){
        str[i] = toupper(str[i]);
    }

    //debug
    printf("%s\n", str);
    fclose(pfile);

    //write to temp file
    pfile = fopen("temp.txt", "w");
    fputs(str,pfile);

    fclose(pfile);

    //rename file
    // rename("temp.txt", "challenge10.txt");

    if(rename("temp.txt", "challenge10rename.txt")==0){
        printf("successful rename\n");
    }else{
        printf("rename unsuccessful\n");
    }

    if(remove("temp.txt") == 0){
        printf("remove successful\n");
    }

    free(str);
    return 0;
}