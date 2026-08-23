#include <stdio.h>

char board[3][3] = {
    {'1', '2', '3'},
    {'4', '5', '6'},
    {'7', '8', '9'}
};

void drawBoard() {
    printf("\n");
    printf(" %c | %c | %c \n", board[0][0], board[0][1], board[0][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[2][0], board[2][1], board[2][2]);
    printf("\n");
}

int checkWin() {
    // Rows and Columns
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) return 1;
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) return 1;
    }
    // Diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) return 1;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) return 1;

    return 0;
}

int main() {
    int player = 1, choice, row, col;
    char mark;

    for (int turn = 0; turn < 9; turn++) {
        drawBoard();
        player = (turn % 2 == 0) ? 1 : 2;
        mark = (player == 1) ? 'X' : 'O';

        printf("Player %d (%c), enter a cell number (1-9): ", player, mark);
        scanf("%d", &choice);

        if (choice < 1 || choice > 9) {
            printf("Invalid input! Try again.\n");
            turn--;
            continue;
        }

        row = (choice - 1) / 3;
        col = (choice - 1) % 3;

        if (board[row][col] == 'X' || board[row][col] == 'O') {
            printf("Cell already taken! Try another cell.\n");
            turn--;
            continue;
        }

        board[row][col] = mark;

        if (checkWin()) {
            drawBoard();
            printf("Player %d (%c) Wins!\n", player, mark);
            return 0;
        }
    }

    drawBoard();
    printf("It's a Draw!\n");
    return 0;
}
