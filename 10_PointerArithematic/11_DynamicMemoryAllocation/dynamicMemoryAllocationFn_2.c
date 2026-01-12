/*malloc(), calloc(), realloc() fns*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    printf("%d\n", sizeof(int));//debug

    //decalre an malloc() fn
    int *pNumber = (int*)malloc(100);//100 B allocated. casted to int* pointer as malloc returns address of the first byte allocated. 

    //aliter
    int *pNumber2 = (int*)malloc(25*sizeof(int));

    //malloc return null pointer. to check

    if(!pNumber2){
        printf("program exit\n");
    }

    //after program ends,memory must be freed
    free(pNumber2);
    printf("%p\n",pNumber2);
    return 0;
}

/*

Here is the **text from the image**, reproduced **exactly (text only)**:

---

**malloc**

• the simplest standard library function that allocates memory at runtime is called malloc()
  • need to include the stdlib.h header file
  • you specify the number of bytes of memory that you want allocated as the argument
  • returns the address of the first byte of memory that it allocated
  • because you get an address returned, a pointer is the only place to put it

```
int *pNumber = (int*)malloc(100);
```

• in the above, you have requested 100 bytes of memory and assigned the address of this memory block to pNumber
  • pNumber will point to the first int location at the beginning of the 100 bytes that were allocated
  • can hold 25 int values on my computer, because they require 4 bytes each
  • assumes that type int requires 4 bytes

• it would be better to remove the assumption that ints are 4 bytes

```
int *pNumber = (int*)malloc(25*sizeof(int));
```
---
• also notice the cast (int*), which converts the address returned by the function to the type pointer to int
• malloc returns a pointer of type pointer to void, so you have to cast
*/