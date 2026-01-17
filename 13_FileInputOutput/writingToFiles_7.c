#include <stdio.h>

int main(void){
    //pointer to file
    FILE *pfile;
    int ch;

    pfile = fopen("ayush.txt", "w+");

    //error check
    if(!pfile){
        perror("error opening file");
        return -1;
    }

    //write char to file
    for(ch=33;ch<100;ch++){
        fputc(ch, pfile);
    }

    //close file
    fclose(pfile);
    pfile = NULL;

    return 0;
}

/*
Writing characters to a text file

the simplest write operation is provided by the function fputc()

writes a single character to a text file

int fputc(int ch, FILE *pfile);


the function writes the character specified by the first argument to the file identified by the second argument (file pointer)

returns the character that was written if successful

Return EOF if failure

In practice, characters are not usually written to a physical file one by one

extremely inefficient

the putc() function is equivalent to fputc()

requires the same arguments and the return type is the same

difference between them is that putc() may be implemented in the standard library as a macro, whereas fputc() is a function
*/