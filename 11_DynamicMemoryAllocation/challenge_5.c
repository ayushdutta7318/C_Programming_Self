/*challenge*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    //take user i/p
    char *str = (char *)calloc(25, sizeof(char));

    printf("Enter str: \n");
    scanf("%s", str);

    printf("%s\n", str);
    printf("Addr: %p\n", str);
    printf("Addr: %c\n", *str);

    for(str;  *str!='\0';str++){
        printf("%c ", *str);
    }
    free(str);
    return 0;
}