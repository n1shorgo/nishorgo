#include <stdio.h>
#include <stdbool.h>

#define SIZE 9

void printGrid(int grid[SIZE][SIZE]) {
    for (int row = 0; row < SIZE; row++) {
        for (int col = 0; col < SIZE; col++) {
            printf("%2d", grid[row][col]);
        }
        printf("\n");
    }
}

bool isSafe(int grid[SIZE][SIZE], int row, int col, int num) {
    for (int i = 0; i < SIZE; i++) {
        if (grid[row][i] == num || grid[i][col] == num) {
            return false;
        }
    }

    int boxRow = row - row % 3;
    int boxCol = col - col % 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (grid[i + boxRow][j + boxCol] == num) {
                return false;
            }
        }
    }

    return true;
}

bool solveSudoku(int grid[SIZE][SIZE]) {
    int row, col;
    bool isEmpty = false;

    for (row = 0; row < SIZE; row++) {
        for (col = 0; col < SIZE; col++) {
            if (grid[row][col] == 0) {
                isEmpty = true;
                break;
            }
        }
        if (isEmpty) {
            break;
        }
    }

    if (!isEmpty) {
        return true;
    }

    for (int num = 1; num <= SIZE; num++) {
        if (isSafe(grid, row, col, num)) {
            grid[row][col] = num;

            if (solveSudoku(grid)) {
                return true;
            }

            grid[row][col] = 0;
        }
    }

    return false;
}

int main() {
    int grid[SIZE][SIZE] = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };

    printf("Sudoku grid:\n");
    printGrid(grid);

    printf("\nEnter row, column, and value (separated by spaces) to fill a cell:\n");
    printf("Enter -1 to quit.\n");

    int row, col, value;
    while (true) {
        printf("\nRow: ");
        scanf("%d", &row);
        row= row-1;
        if (row == -1) {
            break;
        }

        printf("Column: ");
        scanf("%d", &col);
        col= col-1;

        printf("Value: ");
        scanf("%d", &value);

        if (row < 0 || row >= SIZE || col < 0 || col >= SIZE || value < 1 || value > SIZE) {
            printf("Invalid input. Please try again.\n");
            continue;
        }

        if (!isSafe(grid, row, col, value)) {
            printf("Invalid move. Please try again.\n");
            continue;
        }

        grid[row][col] = value;

        printf("\nUpdated Sudoku grid:\n");
        printGrid(grid);

        if (solveSudoku(grid)) {
            printf("\nCongratulations! Sudoku solved.\n");
            break;
        } else {
            printf("\nNo solution exists yet.\n");
        }
    }

    return 0;
}
