#include<stdio.h>
// Board size
#define SIZE 8

// Piece representation
#define EMPTY ' '
#define PAWN 'P'
#define ROOK 'R'
#define KNIGHT 'N'
#define BISHOP 'B'
#define QUEEN 'Q'
#define KING 'K'

// Function to initialize the chessboard
void initializeBoard(char board[SIZE][SIZE]) {
    int i, j;

    // Placing pawns
    for (j = 0; j < SIZE; j++) {
        board[1][j] = PAWN;
        board[SIZE - 2][j] = PAWN;
    }

    // Placing other pieces
    for (i = 2; i < SIZE - 2; i++) {
        for (j = 0; j < SIZE; j++) {
            board[i][j] = EMPTY;
        }
    }

    // Placing rooks
    board[0][0] = ROOK;
    board[0][SIZE - 1] = ROOK;
    board[SIZE - 1][0] = ROOK;
    board[SIZE - 1][SIZE - 1] = ROOK;

    // Placing knights
    board[0][1] = KNIGHT;
    board[0][SIZE - 2] = KNIGHT;
    board[SIZE - 1][1] = KNIGHT;
    board[SIZE - 1][SIZE - 2] = KNIGHT;

    // Placing bishops
    board[0][2] = BISHOP;
    board[0][SIZE - 3] = BISHOP;
    board[SIZE - 1][2] = BISHOP;
    board[SIZE - 1][SIZE - 3] = BISHOP;

    // Placing queens
    board[0][3] = QUEEN;
    board[SIZE - 1][3] = QUEEN;

    // Placing kings
    board[0][4] = KING;
    board[SIZE - 1][4] = KING;
}

// Function to print the chessboard
void printBoard(char board[SIZE][SIZE]) {
    int i, j;

    printf("\n   A B C D E F G H\n");
    for (i = 0; i < SIZE; i++) {
        printf("%d  ", i + 1);
        for (j = 0; j < SIZE; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}
// Function to check if the move is valid
int isValidMove(char board[SIZE][SIZE], int srcRow, int srcCol, int destRow, int destCol) {
    char srcPiece = board[srcRow][srcCol];
    char destPiece = board[destRow][destCol];

    // Check if the source position is valid and contains a piece
    if (srcRow < 0 || srcRow >= SIZE || srcCol < 0 || srcCol >= SIZE || srcPiece == EMPTY) {
        return 0;
    }

    // Check if the destination position is valid
    if (destRow < 0 || destRow >= SIZE || destCol < 0 || destCol >= SIZE) {
        return 0;
    }

    // Check if the destination position is occupied by the player's own piece
    if (srcPiece == destPiece) {
        return 0;
    }

    // Check if the move is valid for the specific piece
    switch (srcPiece) {
        case PAWN:
            // Pawns can move forward by one square or capture diagonally
            if (!((destCol == srcCol && destRow == srcRow + 1 && destPiece == EMPTY) ||
                  (destCol == srcCol && destRow == srcRow - 1 && destPiece == EMPTY) ||
                  (destCol == srcCol + 1 && destRow == srcRow + 1 && destPiece != EMPTY) ||
                  (destCol == srcCol - 1 && destRow == srcRow + 1 && destPiece != EMPTY) ||
                  (destCol == srcCol + 1 && destRow == srcRow - 1 && destPiece != EMPTY) ||
                  (destCol == srcCol - 1 && destRow == srcRow - 1 && destPiece != EMPTY))) {
                return 0;
            }
            break;
        case ROOK:
            // Rooks can move horizontally or vertically any number of squares
            if (!((destRow == srcRow || destCol == srcCol) && isPathClear(board, srcRow, srcCol, destRow, destCol))) {
                return 0;
            }
            break;
        case KNIGHT:
            // Knights move in an L-shape: two squares in one direction and one square in a perpendicular direction
            if (!((destRow == srcRow + 2 && (destCol == srcCol + 1 || destCol == srcCol - 1)) ||
                  (destRow == srcRow - 2 && (destCol == srcCol + 1 || destCol == srcCol - 1)) ||
                  (destCol == srcCol + 2 && (destRow == srcRow + 1 || destRow == srcRow - 1)) ||
                  (destCol == srcCol - 2 && (destRow == srcRow + 1 || destRow == srcRow - 1)))) {
                return 0;
            }
            break;
        case BISHOP:
            // Bishops can move diagonally any number of squares
            if (!((destRow - srcRow == destCol - srcCol || destRow - srcRow == srcCol - destCol) &&
                  isPathClear(board, srcRow, srcCol, destRow, destCol))) {
                return 0;
            }
            break;
        case QUEEN:
            // Queens can move horizontally, vertically, or diagonally any number of squares
            if (!((destRow == srcRow || destCol == srcCol || destRow - srcRow == destCol - srcCol ||
                   destRow - srcRow == srcCol - destCol) && isPathClear(board, srcRow, srcCol, destRow, destCol))) {
                return 0;
            }
            break;
        case KING:
            // Kings can move one square in any direction
            if (!((abs(destRow - srcRow) <= 1) && (abs(destCol - srcCol) <= 1))) {
                return 0;
            }
            break;
        default:
            return 0;
    }

    return 1;
}

// Function to check if the path between source and destination positions is clear for sliding pieces
int isPathClear(char board[SIZE][SIZE], int srcRow, int srcCol, int destRow, int destCol) {
    int deltaRow = (destRow > srcRow) ? 1 : ((destRow < srcRow) ? -1 : 0);
    int deltaCol = (destCol > srcCol) ? 1 : ((destCol < srcCol) ? -1 : 0);

    int row = srcRow + deltaRow;
    int col = srcCol + deltaCol;

    while (row != destRow || col != destCol) {
        if (board[row][col] != EMPTY) {
            return 0; // Path is not clear
        }

        row += deltaRow;
        col += deltaCol;
    }

    return 1; // Path is clear
}

// Function to make a move
void makeMove(char board[SIZE][SIZE], int srcRow, int srcCol, int destRow, int destCol) {
    char piece = board[srcRow][srcCol];

    // Move the piece to the destination
    board[destRow][destCol] = piece;
    board[srcRow][srcCol] = EMPTY;
}
int main() {
    char board[SIZE][SIZE];
    int srcRow, srcCol, destRow, destCol;
    int currentPlayer = 1;

    // Initialize the chessboard
    initializeBoard(board);

    // Game loop
    while (1) {
        // Print the current state of the chessboard
        printBoard(board);

        // Get the move from the current player
        printf("\nPlayer %d's turn:\n", currentPlayer);
        printf("Enter the source position (e.g., A2): ");
        scanf(" %c%d", &srcCol, &srcRow);
        printf("Enter the destination position (e.g., A4): ");
        scanf(" %c%d", &destCol, &destRow);

        // Convert the input positions to array indices
        srcCol = srcCol - 'A';
        destCol = destCol - 'A';
        srcRow--;
        destRow--;

        // Check if the move is valid
        if (!isValidMove(board, srcRow, srcCol, destRow, destCol)) {
            printf("Invalid move! Please try again.\n");
            continue;
        }

        // Make the move
        makeMove(board, srcRow, srcCol, destRow, destCol);

        // Switch to the other player
        currentPlayer = (currentPlayer == 1) ? 2 : 1;
    }

    return 0;
}
