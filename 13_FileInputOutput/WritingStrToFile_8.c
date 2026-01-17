#include <stdio.h>

int main(void)
{
    // pointer to file struct
    FILE *pfile;

    pfile = fopen("ayush2.txt", "w+");

    // write string to file
    fputs("i am ayush\n", pfile);
    fputs("i am in indore", pfile);

    // close file
    fclose(pfile);
    pfile = NULL;
    return 0;
}

/*
Writing a string to a text file

you can use the fputs() function to write to any file or stream

int fputs(const char *str, FILE *pfile);

the first argument is a pointer to the character string that is to be written to the file

the second argument is the file pointer

this function will write characters from a string until it reaches a '\0' character

does not write the null terminator character to the file

can complicate reading back variable-length strings from a file that have been written by fputs()

expecting to write a line of text that has a newline character at the end
*/