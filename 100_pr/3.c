#include <stdio.h>
#include <stdbool.h>

// 3
int sumNatural(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

// 4
int factorial(int n)
{
    // base case:
    if (n == 0 || n == 1)
    {
        return 1;
    }

    // recursive case:
    return n * factorial(n - 1);
}

// 5

int reverseNum(int num)
{
    int reverse = 0, remainder;

    while (num != 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }
    return reverse;
}

// 6
int numberOfDigits(int n)
{
    int count = 0;
    while (n != 0)
    {
        count++;
        n /= 10;
    }
    return count;
}

// 7
int isPalindrome(int j)
{
    int reverse = 0, remainder, original = j;
    while (j != 0)
    {
        remainder = j % 10;
        reverse = reverse * 10 + remainder;
        j /= 10;
    }
    // printf("%d\n",reverse); for debugging
    
    return reverse == original ? 1:0;
}

int main(void)
{

    // 1.
    for (int i = 1; i <= 10; i++)
    {
        printf("value of i in iteration %i is %i\n", i, i);
    }

    // 2
    for (int i = 1; i <= 50; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
        else
        {
            continue;
        }
    }

    // 3
    int n = 5;
    printf("Sum of first %d natural number: %d\n", n, sumNatural(n));

    // 4
    printf("Factorial: %d\n", factorial(5));

    // 5
    printf("Reverse: %d\n", reverseNum(12345));

    // 6
    printf("Number of digits: %d\n", numberOfDigits(12345));

    //7
    printf("Palindrome: %d\n", isPalindrome(121));
    printf("Palindrome: %d\n", isPalindrome(535));

    return 0;
}