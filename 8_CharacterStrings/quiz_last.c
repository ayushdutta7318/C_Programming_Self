#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define z 10

int main(void)
{
    char ary[] = "Hello...!";
    printf("%s\n", ary);
    printf("%i\n", strlen(ary));

    char a[] = {'a', 'b', 'c', '\0'};
    printf("%s\n", a);

    char b[25];
    scanf("%s", b);
    printf("%s\n", b);

   const int z = 5;
   printf("z=%d\n", z);
    return 0;
}