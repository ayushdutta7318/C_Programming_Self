#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // create pointer to file:
    FILE *pfile;
    int characterInt;
    int counter = 1;

    // open file;
    pfile = fopen("challenge.txt", "r");

    // error check
    if (!pfile)
    {
        perror("cannot open file");
        return (-1);
    }

    // reading and counting lines
    while ((characterInt = fgetc(pfile)) != EOF)
    {
        printf("%c", characterInt);
        if (characterInt == '\n')
        {
            counter++;
        }
    }

    // print count:
    printf("the number of lines: %d\n", counter);

    // close file
    fclose(pfile);
    pfile = NULL;
    return 0;
}