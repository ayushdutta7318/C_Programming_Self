/*Guess the number*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // generate random number:
    srand(time(NULL)); // seed once
    int max = 20, min = 0;
    int r = rand() % (max - min + 1) + min;
    // printf("random num: %d\n", r);

    // take user input
    int user_input;
    int tries = 3;

    // check condition
    while (user_input != r)
    {
        printf("Enter number: \n");
        scanf("%d", &user_input);

        //check if tries left
        if(tries == 1){
            printf("you have lost!\n");
            break;
        }
        
        if (user_input > r)
        {
            printf("%d is too high\n", user_input);
            tries--;
        }
        else if (user_input < r)
        {
            printf("%d is too low\n", user_input);
            tries--;
        }
        else
        {
            printf("Hurray, You Won! user input: %d, random number: %d", user_input, r);
            break;
        }
        
    }

    return 0;
}