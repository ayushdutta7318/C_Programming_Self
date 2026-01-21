/*Search, Tokeninze, Analyze Str*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{

    // finding single char or substr in a str.

    // pointer: variable stores address of a var. used in searching
    int num = 5;
    int *pNum = &num;
    printf("%i\n", *pNum);
    printf("%i\n", pNum);

    // searching for a char in a str using strchr(). it returns pointer where char first exist in the memory. demo below:

    char str[] = "I am quick search";
    char ch = 'q';
    char *pCh = NULL;
    pCh = strchr(str, ch);
    printf("%p\n", pCh);
    printf("%d\n", *pCh);

    //tokenizng str: sequebce of substr separated by , " ", . demlimiter.

    char nameStr[] = "hello, - my - name - is - ayush";
    const char sep[2] = "-";

    char *token;

    /*get first token*/
    token = strtok(nameStr,sep);

    //walk throug other token
    while(token !=NULL){
        printf("%s\n", token);
        token = strtok(NULL,sep);
    }

    //Ana,yzing str: 

    char buff[100];
    int nLetters = 0;
    int nDigits = 0;
    int nPunct = 0;

    printf("Enter letter less than %d\n", 100);
    scanf("%s", buff);

    int i = 0;
    while (buff[i]!='\0')
    {
        if(isalpha(buff[i])){
            ++nLetters;
        }else if(isdigit(buff[i])){
            ++nDigits;
        }else if(ispunct(buff[i])){
            ++nPunct;
        }
        ++i;
    }

    printf("Your string contained %d leters, %d digits, %d punctions\n", nLetters,nDigits,nPunct);
    
    return 0;
}


//i am ayush, i am 21 year exp 30 year!!!
