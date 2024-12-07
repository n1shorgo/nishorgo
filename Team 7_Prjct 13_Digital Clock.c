#include <stdio.h>
#include <stdlib.h>

void displayClock(int hours, int minutes, int seconds) {
    //system("clear");
   // printf("Digital Clock\n");
    printf("%02d:%02d:%02d\n", hours, minutes, seconds);
}

int main() {
    int hours, minutes, seconds;
//printf("DIGITAL CLOCK:\n");
    printf("Enter the initial time:\n");
    printf("Hours (0-23): ");
    scanf("%d", &hours);

    printf("Minutes (0-59): ");
    scanf("%d", &minutes);

    printf("Seconds (0-59): ");
    scanf("%d", &seconds);

     printf("Digital Clock\n");

    while (1) {
        displayClock(hours, minutes, seconds);


        seconds++;
        if (seconds >= 60) {
            seconds = 0;
            minutes++;
            if (minutes >= 60) {
                minutes = 0;
                hours++;
                if (hours >= 24) {
                    hours = 0;
                }
            }
        }


        sleep(1);
    }
    return 0;
}
