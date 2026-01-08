/*challenge str fn:*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    // reverse str

    char s1[50] = "hello wolrd";
    // printf("reversed str: %s\n", strrev(s1));

    // aliter:
    char revStr[50];
    int i = 0;
    while (s1[i] != '\0')
    {
        i++;
    }
    printf("%d\n", i);


    int j = 0;
    i -=1;
    while (i >= 0)
    {
        revStr[j] = s1[i];
        j++;
        i--;
    }
    revStr[j] = '\0';

    printf("reversed str: %s\n", revStr);
    return 0;
}