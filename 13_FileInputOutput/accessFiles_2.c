/*file access*/
// we will write to a txt file myFile.txtin this dir

#include <stdio.h>

int main(void){
    //write mode

    FILE *pfile = NULL;
    char *filename = "myFile.txt";

    pfile = fopen(filename, "w");//open file to write

    if(pfile !=NULL){
        printf("Failed to open %s\n", filename);
    }
    return 0;
}

/*
Accessing Files

files on disk have a name and the rules for naming files are determined by your operating system

You may have to adjust the names depending on what OS your program is running

a program references a file through a file pointer (or stream pointer, since it works on more than a file)

you associate a file pointer with a file programmatically when the program is run

pointers can be reused to point to different files on different occasions

a file pointer points to a struct of type FILE that represents a stream

contains information about the file

whether you want to read or write or update the file

the address of the buffer in memory to be used for data

a pointer to the current position in the file for the next operation

the above is all set via input/output file operations

if you want to use several files simultaneously in a program, you need a separate file pointer for each file

there is a limit to the number of files you can have open at one time

defined as FOPEN_MAX in stdio.h

######################################################################################################

Opening a file associates a specific external file name with an internal file pointer variable

This process is done using the fopen() function

fopen() returns a file pointer for a specific external file

The fopen() function is defined in stdio.h

Function prototype: FILE *fopen(const char *restrict name, const char *restrict mode);

The first argument to fopen() is a pointer to a string containing the name of the external file to be processed

The file name can be specified explicitly or via a character pointer holding the address of the string

The file name can be obtained from the command line, user input, or defined as a constant in the program

The second argument to fopen() is a character string representing the file mode

The file mode specifies what operation will be performed on the file

The file mode specification is a character string enclosed in double quotes

#########################################################################################

"w" opens a text file for write operations and discards existing contents if the file exists

"a" opens a text file for append operations and writes data to the end of the file

"r" opens a text file for read operations

"w+" opens a text file for update (reading and writing), truncates the file to zero length if it exists, or creates the file if it does not exist

"a+" opens a text file for update (reading and writing), appends to the end of the file if it exists, or creates the file if it does not exist

"r+" opens a text file for update with both reading and writing operations

//rename file: rename(const char *oldName, const char *newName) fn

file should not be open when call rename()
*/