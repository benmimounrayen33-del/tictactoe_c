// Color codes
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define BOLD    "\033[1m"


#include <stdbool.h>





#ifndef GAME_H
#define GAME_H

// Function declarations (prototypes)
void display(char board[3][3]);
void makemove(char board[3][3], char currentPlayer);
bool checkwin(char board[3][3], char currentPlayer);
bool checkdraw(char board[3][3]);

#endif
