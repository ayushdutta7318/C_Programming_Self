/*str conversion*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char text[100];
    char substr[41];

    //take i/p from user:
    printf("Enter text: \n");
    scanf("%s", text);

    printf("enter substr: \n");
    scanf("%s", substr);

    //convert to uppwercase:
    //text
    for(int i = 0; text[i]!='\0';i++){
        text[i] = toupper(text[i]);
    }

   printf("%s\n", text);//debug

   //substr:
   for(int i = 0; substr[i]!='\0';i++){
    substr[i] = toupper(substr[i]);
   }

   printf("%s\n", substr);

   //check for substr a part of text:
    printf("%s %s a part of %s\n", substr, (strstr(text,substr)==NULL?"was not":"was"),text);

    return 0;
}