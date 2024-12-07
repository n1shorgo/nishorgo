#include <stdio.h>

// Function to display the game board
void display_board(char board[3][3]) {
    printf("\n-------------\n");
    for (int i = 0; i < 3; i++) {
        printf("| %c | %c | %c |\n", board[i][0], board[i][1], board[i][2]);
        printf("-------------\n");
    }
}

// Function to check if a player has won
int check_win(char board[3][3], char player) {
    // Check rows
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return 1;
    }

    // Check columns
    for (int i = 0; i < 3; i++) {
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return 1;
    }

    // Check diagonals
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return 1;

    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return 1;

    return 0;
}

int main() {
    char board[3][3] = { { ' ', ' ', ' ' },
                         { ' ', ' ', ' ' },
                         { ' ', ' ', ' ' } };

    int row, col;
    char player = 'X';

    printf("Tic-Tac-Toe Game\n");

    int moves = 0;
    while (moves < 9) {
        printf("Player %c's turn\n", player);

        display_board(board);

        // Get the row and column from the user
        printf("Enter the row (0-2): ");
        scanf("%d", &row);
        printf("Enter the column (0-2): ");
        scanf("%d", &col);

        // Check if the entered position is valid
        if (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != ' ') {
            printf("Invalid move. Try again.\n");
            continue;
        }

        // Make the move
        board[row][col] = player;

        // Check if the current player has won
        if (check_win(board, player)) {
            display_board(board);
            printf("Player %c wins!\n", player);
            break;
        }

        // Switch to the other player
        player = (player == 'X') ? 'O' : 'X';

        moves++;
    }

    // If aade and no player has won, it's a tie
    if (moves == 9) {
        display_board(board);
        printf("It's a tie!\n");
    }

    return 0;
}
