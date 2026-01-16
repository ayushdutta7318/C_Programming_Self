/*File input output*/

#include <stdio.h>

int main(void){

    return 0;
}

/*
Overview

Up until this point, all data that our program accesses is via memory

Scope and variety of applications you can create is limited

All serious business applications require more data than would fit into main memory

Also depend on the ability to process data that is persistent and stored on an external device such as a disk drive

C provides many functions in the header file stdio.h for writing to and reading from external devices

The external device you would use for storing and retrieving data is typically a disk drive

However, the library will work with virtually any external storage device

With all the examples up to now, any data that the user enters is lost once the program ends

If the user wants to run the program with the same data, he or she must enter it again each time

Very inconvenient and limits programming

Referred to as volatile memory
*/