#include <stdio.h>

int main() {
    int n, i, pl1, pl2;
    int roundwinsPlayer1 = 0, roundwinsPlayer2 = 0;
     printf("---Welcome to Rock Paper Scissors Game---\n");
    printf("There will n rounds between 2 player.The player who have highest number he or she will win.\nNote that--\n");
    printf("\tFor Rock the number will be: 1\n");
    printf("\tFor Paper the number  will be: 2\n");
    printf("\tFor Scissors the number will be: 3\n");

    char p1[30],p2[30];
    printf("Enter the player name:");
    gets(p1);
      printf("Enter the player name:");
    gets(p2);

    printf("Enter the number of rounds to play: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("\nRound %d\n", i);
        printf("Player 1, enter your choice (1 for Rock, 2 for Paper, 3 for Scissors): ");
        scanf("%d", &pl1);

        printf("Player 2, enter your choice (1 for Rock, 2 for Paper, 3 for Scissors): ");
        scanf("%d", &pl2);


        if (pl1 < 1 || pl1 > 3 || pl2 < 1 || pl2 > 3) {
            printf("Invalid input! Please enter a number between 1 and 3.\n");
            i--;
            continue;
        }

    if ((pl1 == 1 && pl2 == 3) || (pl1 == 2 && pl2 == 1) ||
            (pl1 == 3 && pl2 == 2)) {
            printf("Player 1 wins this round!\n");
            roundwinsPlayer1++;
        } else if ((pl2 == 1 && pl1 == 3) || (pl2 == 2 && pl1 == 1) ||
                   (pl2 == 3 && pl1 == 2)) {
            printf("Player 2 wins this round!\n");
            roundwinsPlayer2++;
        } else {
            printf("It's a draw!\n");
        }
    }

    printf("\nRound Results:\n");
    printf("Player 1 wins: %d\n", roundwinsPlayer1);
    printf("Player 2 wins: %d\n", roundwinsPlayer2);

    if (roundwinsPlayer1 > roundwinsPlayer2) {
        printf("\nPlayer 1 is the winner! Congratulations!\n");
    } else if (roundwinsPlayer2 > roundwinsPlayer1) {
        printf("\nPlayer 2 is the winner! Congratulations!\n");
    } else {
        printf("\nIt's a draw! No overall winner.\n");
    }

    return 0;
}
