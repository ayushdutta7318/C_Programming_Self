/*Tic Tac Toe*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


// display board
char square[10] = {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
int choice, player;

int checkForWin()
{
    int returnValue = 0;

    if (square[1] == square[2] && square[2] == square[3])
    {
        returnValue = 1;
    }
    else if (square[4] == square[5] && square[5] == square[6])
    {
        returnValue = 1;
    }
    else if (square[7] == square[8] && square[8] == square[9])
    {
        returnValue = 1;
    }
    else if (square[1] == square[4] && square[4] == square[7])
    {
        returnValue = 1;
    }
    else if (square[2] == square[5] && square[5] == square[8])
    {
        returnValue = 1;
    }
    else if (square[3] == square[6] && square[6] == square[9])
    {
        returnValue = 1;
    }
    else if (square[1] == square[5] && square[5] == square[9])
    {
        returnValue = 1;
    }
    else if (square[3] == square[5] && square[5] == square[7])
    {
        returnValue = 1;
    }
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9')
    {
        returnValue = 0;
    }else{
        returnValue = -1;
    }
    return returnValue;
}

void displayBoard(){
    system("cls");
    //print player name
    printf("Player 1 (A) - Player 2 (B)\n\n\n");

    //display numbers:
    printf("     |         |       \n");
    printf("  %c  |    %c    |    %c   \n",square[1],square[2],square[3]);

    printf("_____|_________|____\n");
    printf("     |         |    \n");

    printf("  %c  |    %c    |    %c   \n",square[4],square[5],square[6]);

    printf("_____|_________|____\n");
    printf("     |         |    \n");

    printf("  %c  |    %c    |    %c   \n",square[7],square[8],square[9]);

     printf("     |         |       \n\n");
};

/*
markBoard: Set board with correct char
*/
void markBoard(char mark){
    if(choice == 1 && square[1]=='1'){
        square[1] = mark;
    }else if(choice == 2 && square[2]=='2'){
        square[2] = mark;
    }else if(choice == 3 && square[3]=='3'){
        square[3] = mark;
    }else if(choice == 4 && square[4]=='4'){
        square[4] = mark;
    }else if(choice == 5 && square[5]=='5'){
        square[5] = mark;
    }else if(choice == 6 && square[6]=='6'){
        square[6] = mark;
    }else if(choice == 7 && square[7]=='7'){
        square[7] = mark;
    }else if(choice == 8 && square[8]=='8'){
        square[8] = mark;
    }else if(choice == 9 && square[9]=='9'){
        square[9] = mark;
    }else{
        printf("Invalid move");
        player--;
        getch();//pauses the program
    }
}

int main(void)
{
    int gameStatus;
    char mark;

    player=1;
    

    do{
        displayBoard();

        //change turns
        player = (player%2) ? 1:2;

        //take i/p num from player
        printf("Player %d, enter number\n",player);
        scanf("%d",&choice);

        //select the mark
        mark = player ==1?'A':'B';
        //sert the UI
        markBoard(mark);

        gameStatus = checkForWin();
        player++;
    }while(gameStatus==-1);


    return 0;
}