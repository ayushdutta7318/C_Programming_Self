#include <stdio.h>

// 1. find length of str
int lengthOfString(char str[])
{
    int count = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        count++;
        i++;
    }
    return count;
}

// 2. concatenate str
void concatStr(char str1[], char str2[])
{

    int i = 0, j = 0;
    while (str1[i] != '\0')
    {
        i++; // increase i upto null char
    }
    printf("%i\n", i);

    while (str2[j] != '\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }

    printf("%s\n", str1);
}

// 3. comapre str:

int compareStr(char str1[50], char str2[50])
{
    int index = 0;
    while (str1[index] != '\0' && str2[index] != '\0')
    {
        if(str1[index] != str2[index]){
            return 0;
        }
        index++;
    }
    return 1;
}

int main(void)
{
    // 1
    char testStr[] = "ayush";
    printf("The length of %s is %d\n", testStr, lengthOfString(testStr));

    // 2
    char sample1[] = "ayush";
    char sample2[] = "dutta";

    concatStr(sample1, sample2);

    // 3
    char str1[50] = "abcde";
    char str2[50] = "aqcde";
    printf("%i\n", compareStr(str1, str2));

    return 0;
}