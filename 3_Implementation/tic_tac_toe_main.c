#include <stdio.h>

/**
 * @brief making an array for board
 * 
 */
char square[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
/**
 * @brief function to check weather win or draw or to continue the board
 * 
 * @return int 
 */
int checkwin();

/**
 * @brief To print the Game board
 * 
 */
void board();

int main()
{
    /**
     * @brief initialise the game parameters
     * player--to know which player's move
     * check -- stores the condition of the game
     *          1 for win
     *          0 for draw
     *          -1 for continue
     * choice-- describes where to place the mark
     */
    int player = 1, check, choice;
/**
 * @brief 
 * 
 */
    char mark;
    do
    {
        board();
       
       player= fun_player(player);
        printf("Player %d, enter a number:  ", player);
       

        mark = (player == 1) ? 'X' : 'O';
 scanf("%d", &choice);
        if (choice == 1 && square[1] == '1')
            square[1] = mark;
            
        else if (choice == 2 && square[2] == '2')
            square[2] = mark;
            
        else if (choice == 3 && square[3] == '3')
            square[3] = mark;
            
        else if (choice == 4 && square[4] == '4')
            square[4] = mark;
            
        else if (choice == 5 && square[5] == '5')
            square[5] = mark;
            
        else if (choice == 6 && square[6] == '6')
            square[6] = mark;
            
        else if (choice == 7 && square[7] == '7')
            square[7] = mark;
            
        else if (choice == 8 && square[8] == '8')
            square[8] = mark;
            
        else if (choice == 9 && square[9] == '9')
            square[9] = mark;
            
        else
        {
            printf("Invalid move ");

            player--;
            
        }
        check = checkwin();

        player++;
    }while (check ==  - 1);
    
    board();
    
    if (check == 1)
        printf("==>\aPlayer %d win ", --player);
    else if (check== 0)
        printf("==>\aGame draw");


    return 0;
}
/**
 * @brief FUNCTION TO RETURN GAME STATUS
          1 FOR GAME IS OVER WITH RESULT
         -1 FOR GAME IS IN PROGRESS
          O GAME IS OVER AND NO RESULT
 * 
 * @return int 
 */

int checkwin()
{
    if (square[1] == square[2] && square[2] == square[3])
        return 1;
        
    else if (square[4] == square[5] && square[5] == square[6])
        return 1;
        
    else if (square[7] == square[8] && square[8] == square[9])
        return 1;
        
    else if (square[1] == square[4] && square[4] == square[7])
        return 1;
        
    else if (square[2] == square[5] && square[5] == square[8])
        return 1;
        
    else if (square[3] == square[6] && square[6] == square[9])
        return 1;
        
    else if (square[1] == square[5] && square[5] == square[9])
        return 1;
        
    else if (square[3] == square[5] && square[5] == square[7])
        return 1;
        
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
        square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] 
        != '7' && square[8] != '8' && square[9] != '9')

        return 0;
    else
        return  - 1;
}


/**
 * @brief Function to prints the board
 * 
 */
void board()
{
    
    printf("\n\n\tTic Tac Toe\n\n");

    printf("Player 1 (X)  -  Player 2 (O)\n\n\n");


    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", square[1], square[2], square[3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[4], square[5], square[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[7], square[8], square[9]);

    printf("     |     |     \n\n");
}

/*******************************************************************
END OF PROJECT*/
 
