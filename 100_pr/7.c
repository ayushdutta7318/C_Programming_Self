#include <stdio.h>
#include <math.h>

/*
1.
Write a program to print this pattern:
*
**
***
****

*/

void pattern(int row)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

/*
Write a program to print this pattern:
1
12
123
1234
*/
void numPattern(int row)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d", j + 1);
        }
        printf("\n");
    }
}

// 3. add two num
int addTwoNumbers(int a, int b)
{
    return a + b;
}

// 4. prime numbers:
int primeNumber(int num)
{
    // check if input is even
    if (num % 2 == 0)
    {
        printf("not a prime\n");
        return 0;
    }

    // check for prime
    int i = 5;
    while (i <= sqrt(num))
    {
        if (num % i == 0)
        {
            printf("It's not a prime num\n");
            return 1;
        }
        i++;
    }
    return 0;
}

// 5.factorial

int factorial(int num)
{
    // base case:
    if (num == 0 || num == 1)
    {
        return 1;
    }

    // loop
    int result = 1;
    while (num > 1)
    {
        result *= num;
        num--;
    }
    return result;
}

// 6. max of two num:
int maxOfTwoNumbers(int a, int b)
{
    return a > b ? a : b;
}

// 7. swap nums
void swapNumbers(int a, int b)
{
    int temp = b;
    b = a;
    a = temp;
    printf("a: %d, b: %d\n", a, b);
}

// 8. read string
void readStr(char str[])
{
    printf("%s\n", str);
}

// 9.
void lengthOfStr(char str[])
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }

    printf("The len of %s is %d\n", str, count);
}

// 10
void reverseStr(char str[])
{
    int i = 0, j = 0;
    char reverseStr[100];
    while (str[i] != '\0')
    {
        i++;
    }
    printf("%d\n", i); // debug

    while (i >= 0)
    {
        reverseStr[j] = str[i - 1];
        i--;
        j++;
    }
    printf("Reversed Str: %s\n", reverseStr);
}

// 11.
int palindrome(char str[])
{
    // reverse the str
    char revStr[100];
    int i = 0, j = 0;
    while (str[i] != '\0')
    {
        i++;
    }

    // reverse the str:
    while (i >= 0)
    {
        revStr[j] = str[i - 1];
        i--;
        j++;
    }

    printf("%s\n", revStr);//debug

    // comapre str:
    int k = 0;
    while (str[k] != '\0')
    {
        if (str[k] != revStr[k])
        {
            printf("%s and %s is not a palindrome\n", str, revStr);
            return 0;
        }
        k++;
    }
    printf("%s and %s are palidrome\n", str, revStr);
    return 1;
}


//13.
void countVowelsAndConsonats(char str[]){
int countV = 0, countC=0;

int i = 0;
while(str[i]!='\0'){
    if(str[i]=='a' ||str[i]=='e' || str[i]=='i'||str[i]=='o'||str[i]=='u'){
        countV++;
    }else{
        countC++;
    }
    i++;
}

printf("Vowel: %d, Consonats: %d\n", countV,countC);
}


int main(void)
{
    // 1.
    pattern(5);

    // 2.
    numPattern(5);

    // 3.
    printf("Sum of two nums: %d\n", addTwoNumbers(5, 5));

    // 4.
    printf("%d\n", primeNumber(563));
    printf("%d\n", primeNumber(564));
    printf("%d\n", primeNumber(564));
    printf("%d\n", primeNumber(35));

    // 5.
    printf("Factorial: %d\n", factorial(5));
    printf("Factorial: %d\n", factorial(6));
    printf("Factorial: %d\n", factorial(0));
    printf("Factorial: %d\n", factorial(1));

    // 6.
    printf("%d\n", maxOfTwoNumbers(3, 5));
    printf("%d\n", maxOfTwoNumbers(7, 5));
    printf("%d\n", maxOfTwoNumbers(5, 5));
    printf("%d\n", maxOfTwoNumbers(5, 5));

    // 7.
    swapNumbers(5, 3);

    // 8.
    readStr("abcde");

    // 9.
    lengthOfStr("abcde");
    lengthOfStr(" ");
    lengthOfStr("abc");

    // 10.
    reverseStr("abcde");

    // 12.
    palindrome("abcde");
    palindrome("aba");
    palindrome("abcba");

    //13.
    countVowelsAndConsonats("abcde");

    return 0;
}