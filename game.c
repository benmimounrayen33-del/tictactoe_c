#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "game.h"  // include your own header
void display(char board[3][3]) {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            char cell = board[i][j];
            if (cell == 'X')
                printf(" %s❌%s ", RED, RESET);
            else if (cell == 'O')
                printf(" %s⭕%s ", CYAN, RESET);
            else
                printf("   ");  // empty cell

            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("---|---|---\n");
    }
    printf("\n");
}

void makemove(char board[3][3],char currentplayer) {
    int row, col;
    while (true) {
        printf("Player %c, enter your move (row and column): ", currentplayer);
        scanf("%d %d", &row, &col);
        if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ') {
            board[row][col] = currentplayer;
            break;
        } else {
            printf("Invalid move. Try again.\n");
        }
    }

}
bool checkwin(char board[3][3], char currentplayer) {
    for (int i = 0; i < 3; i++) {
        if ((board[i][0] == currentplayer && board[i][1] == currentplayer && board[i][2] == currentplayer) ||
            (board[0][i] == currentplayer && board[1][i] == currentplayer && board[2][i] == currentplayer)) {
            return true;
        }
    }
    if ((board[0][0] == currentplayer && board[1][1] == currentplayer && board[2][2] == currentplayer) ||
        (board[0][2] == currentplayer && board[1][1] == currentplayer && board[2][0] == currentplayer)) {
        return true;
    }
    return false;
}
bool checkdraw(char board[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                return false;
            }
        }
    }
    return true;
}