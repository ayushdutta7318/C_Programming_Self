/*common str fn*/

#include <stdio.h>
#include <string.h> //lib for str

int main(void){
    //strlen(): len of str
    char myStr[] = "my strign";
    printf("teh len of my str is %d\n", strlen(myStr));

    //copy str: strcpy() is not used bcz it not check sizeof destinationStr
    char sourceStr[] = "my name is abcde";
    char destinationStr[50];

    strncpy(destinationStr,sourceStr, sizeof(destinationStr)-1);//-1 for null char
    printf("The destination str is: %s\n", destinationStr);

    //concat str
    char str1[] = "abc";
    char str2[] = "efghi";
    
    printf("concat str is: %s\n",strcat(str1,str2));

    //concat strncat: take 3 arg, last one size
    
    char src[50], dest[50];

    strcpy(src, "this si source");
    strcpy(dest, "this is destination ");

    strncat(dest,src, 15);
    printf("concat strn: %s\n", dest);

    return 0;
}