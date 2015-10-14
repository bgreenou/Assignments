#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void showDice(int num)
{
}


int main (void)
{
    srand(time(NULL));

    //declarations

    int diceRoll;
    int gameTotal;
    int rollTotal1;
    int playerOneScore;
    int rollTotal2;
    int playerTwoScore;
    int loop;
    int loop2;
    int bigLoop;
    char playerChoice;


    //initializations

    gameTotal = 0;
    rollTotal1 = 0;
    playerOneScore = 0;
    rollTotal2 = 0;
    playerTwoScore = 0;
    loop = 1;
    loop2 = 1;
    bigLoop = 1;
    playerChoice = 'x';
    diceRoll = (rand() % 6) + 1;

    //introduction

    printf("Welcome to the Game of Pig\n");
    printf("==========================\n");
    printf("What is the game total?:");
    scanf("%d%*c", &gameTotal);
    if (gameTotal == 0)
    {
        printf("Please enter a number between 1 and 100.\n-> :");
        getchar();
        scanf("%d%*c", &gameTotal);
    }

    //playing

while (bigLoop == 1)
{ 

  while (loop == 1)
  {
    printf("--------------------------\n");
    printf("Player 1 (score = %d)\n", playerOneScore);
    printf("--------------------------\n");
    printf("Player 1 Turn;\n");
    printf("(R)oll or (H)old?:");
    scanf("%c%*c", &playerChoice);

    if (playerChoice == 'r' || playerChoice == 'R')
    {
        printf("Roll...\nYou rolled a %d\n", diceRoll);
        if (diceRoll == 1)
        {
            printf("      +-------+\n      |       |\n      |   0   |\n      |       |\n      +-------+\n");
            rollTotal1 = 0;
            printf("OINK OINK! That's a Pig and your turn is over!\n");
            loop = 0;
        }
        if (diceRoll == 2)
        {
            printf("      +-------+\n      | 0     |\n      |       |\n      |     0 |\n      +-------+\n");
            rollTotal1 = rollTotal1 + diceRoll;
            printf("Roll Total: %d\n", rollTotal1);
        }
        if (diceRoll == 3)
        {
            printf("      +-------+\n      | 0     |\n      |   0   |\n      |     0 |\n      +-------+\n");
            rollTotal1 = rollTotal1 + diceRoll;
            printf("Roll Total: %d\n", rollTotal1);
        }
        if (diceRoll == 4)
        {
            printf("      +-------+\n      | 0   0 |\n      |       |\n      | 0   0 |\n      +-------+\n");
            rollTotal1 = rollTotal1 + diceRoll;
            printf("Roll Total: %d\n", rollTotal1);
        }
        if (diceRoll == 5)
        {
            printf("      +-------+\n      | 0   0 |\n      |   0   |\n      | 0   0 |\n      +-------+\n");
            rollTotal1 = rollTotal1 + diceRoll;
            printf("Roll Total: %d\n", rollTotal1);
        }
        if (diceRoll == 6)
        {
            printf("      +-------+\n      | 0   0 |\n      | 0   0 |\n      | 0   0 |\n      +-------+\n");
            rollTotal1 = rollTotal1 + diceRoll;
            printf("Roll Total: %d\n", rollTotal1);
        }

    }
    else
    {
        if(playerChoice == 'h' || playerChoice == 'H')
        {
            printf("Hold. Very well.\n");
            printf("--------------------------\n");
            playerOneScore = playerOneScore + rollTotal1;
            rollTotal1 = 0;
            printf("Player 1 Score = %d\n", playerOneScore);
            loop = 0;

            if (playerOneScore >= gameTotal)
            {
                printf("Player 1 Wins!\n");
                return 0;
            }
        }
        else
        {
            printf("You messed up.\n");
        }
     }
    diceRoll = (rand() % 6) + 1;

  } // *** LOOP END  ***

    // ***** player 2 *****

  while (loop2 == 1)
  {
    printf("--------------------------\n");
    printf("Player 2 (score = %d)\n", playerTwoScore);
    printf("--------------------------\n");
    printf("Player 2 Turn;\n");
    printf("(R)oll or (H)old?:");
    scanf("%c%*c", &playerChoice);

    if (playerChoice == 'r' || playerChoice == 'R')
    {
        printf("Roll...\nYou rolled a %d\n", diceRoll);
        if (diceRoll == 1)
        {
            printf("      +-------+\n      |       |\n      |   0   |\n      |       |\n      +-------+\n");
            rollTotal2 = 0;
            printf("OINK OINK! That's a Pig and your turn is over!\n");
            loop2 = 0;
        }
        if (diceRoll == 2)
        {
            printf("      +-------+\n      | 0     |\n      |       |\n      |     0 |\n      +-------+\n");
            rollTotal2 = rollTotal2 + diceRoll;
            printf("Roll Total: %d\n", rollTotal2);
        }
        if (diceRoll == 3)
        {
            printf("      +-------+\n      | 0     |\n      |   0   |\n      |     0 |\n      +-------+\n");
            rollTotal2 = rollTotal2 + diceRoll;
            printf("Roll Total: %d\n", rollTotal2);
        }
        if (diceRoll == 4)
        {
            printf("      +-------+\n      | 0   0 |\n      |       |\n      | 0   0 |\n      +-------+\n");
            rollTotal2 = rollTotal2 + diceRoll;
            printf("Roll Total: %d\n", rollTotal2);
        }
        if (diceRoll == 5)
        {
            printf("      +-------+\n      | 0   0 |\n      |   0   |\n      | 0   0 |\n      +-------+\n");
            rollTotal2 = rollTotal2 + diceRoll;
            printf("Roll Total: %d\n", rollTotal2);
        }
        if (diceRoll == 6)
        {
            printf("      +-------+\n      | 0   0 |\n      | 0   0 |\n      | 0   0 |\n      +-------+\n");
            rollTotal2 = rollTotal2 + diceRoll;
            printf("Roll Total: %d\n", rollTotal2);
        }

    }
    else
    {
        if(playerChoice == 'h' || playerChoice == 'H')
        {
            printf("Hold. Very well.\n");
            printf("--------------------------\n");
            playerTwoScore = playerTwoScore + rollTotal2;
            rollTotal2 = 0;
            printf("Player 2 Score = %d\n", playerTwoScore);
            loop2 = 0;

            if (playerTwoScore >= gameTotal)
            {
            printf("Player 2 Wins!\n");
            return 0;
            }

        }
        else
        {
            printf("You messed up.\n");
        }
     }
    diceRoll = (rand() % 6) + 1;

  }  // ** LOOP2 END **

    loop = 1;
    loop2 = 1;

}  // ** bigLoop END **

    return 0;
}
