/*dynamic memory allocation*/

#include <stdio.h>

int main(void){

    return 0;
}

/*
Overview

• whenever you define a variable in C, the compiler automatically allocates the correct amount of storage for you based on the data type

• it is frequently desirable to be able to dynamically allocate storage while a program is running

• if you have a program that is designed to read in a set of data from a file into an array in memory, you have three choices
  • define the array to contain the maximum number of possible elements at compile time
  • use a variable-length array to dimension the size of the array at runtime
  • allocate the array dynamically using one of C’s memory allocation routines

#########################################################################################

Dynamic memory allocation

• dynamic memory allocation depends on the concept of a pointer and provides a strong incentive to use pointers in your code

• dynamic memory allocation allows memory for storing data to be allocated dynamically when your program executes
  • allocating memory dynamically is possible only because you have pointers available

• the majority of production programs will use dynamic memory allocation

• allocating data dynamically allows you to create pointers at runtime that are just large enough to hold the amount of data you require for the task

##############################################################################################


Heap vs. Stack

• dynamic memory allocation reserves space in a memory area called the heap

• the stack is another place where memory is allocated
  • function arguments and local variables in a function are stored here
  • when the execution of a function ends, the space allocated to store arguments and local variables is freed

• the memory in the heap is different in that it is controlled by you
  • when you allocate memory on the heap, it is up to you to keep track of when the memory you have allocated is no longer required
  • you must free the space you have allocated to allow it to be reused
*/