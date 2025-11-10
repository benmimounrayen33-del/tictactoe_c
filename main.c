#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "game.h"  // include your own header
int main() {
    char board[3][3];
    memset(board, ' ', sizeof(board));
    char currentplayer = 'X';
    while (true) {
        display(board);
        makemove(board, currentplayer);
        if (checkwin(board, currentplayer)) {
            display(board);
            printf("Player %c wins!\n", currentplayer);
            break;
        }
        if (checkdraw(board)) {
            display(board);
            printf("It's a draw!\n");
            break;
        }
        currentplayer = (currentplayer == 'X') ? 'O' : 'X';
    }
    return 0;
}