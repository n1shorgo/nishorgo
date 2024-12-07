#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct team{
    char name_team[100];            //name of the team
    char name_player[11][100];      //name of the player
    char role_player[11][50];       //role of the player
    int runs_player[11];            //runs scored by the player
    int wickets_player[11];         //wickets taken by the player
    int runs_total;                 //total runs for that team
    float performance_index[11];    //the performance ratio of each team member
};

int main() {
    char name_umpire[2][100];       //umpire names
    char name_venue[100];           //venue name
    char winning_team[100];         //name of the Winning team
    char mom[100];                  //name of the Man of the Match
    int max_runs=0, max_wickets=0;  //maximum individual runs and wickets
    float mom_performance_index=0;  //performance index of man of the match
    char response;
    struct team t[2];               //initializing structure "team"


//  Do-While Loop intended to run until the escape keyword has been entered
    do{

//  Clear Screen command
    system("cls");

//  PRINTS WELCOME MESSAGE
    printf("--------------------------------------------\n");
    printf("| WELCOME TO THE MATCH SUMMARY GENERATOR!!!\n");
    printf("--------------------------------------------\n");
    printf(" Please enter the following information:\n");
    printf("\n");   printf("\n");


//  Asks for the name of the venue
    printf(" Name of the venue: ");
    scanf("%[^\n]s", &name_venue);
    getchar();
    printf("\n");


//  Asks for the name of the two umpires
    for(int i=0;i<2;i++){
        printf(" Name of Umpire %d: ", i+1);
        scanf("%[^\n]s", &name_umpire[i]);
        getchar();
    }
    printf("\n");


//  Asks for the information of name, role, wickets and runs of each member of both teams
    for(int i=0;i<2;i++){
        printf(" Name of Team %d: ", i+1);
        scanf("%[^\n]s", &t[i].name_team);
        getchar();
        printf("\n");
        for(int j=0;j<11;j++){
            printf("\tInformation of Player %d of team %d\n", j+1, i+1);
            printf("\n");

            printf(" Name: ");
            scanf("%[^\n]s", &t[i].name_player[j]);
            getchar();
            printf(" Role: ");
            scanf("%[^\n]s", &t[i].role_player[j]);
            getchar();
            printf(" Runs: ");
            scanf("%d", &t[i].runs_player[j]);
            getchar();
            printf(" Wickets: ");
            scanf("%d", &t[i].wickets_player[j]);
            getchar();
            printf("\n");
        }

    }


/*  Calculates the man of the match through the following process:
        -> A 2D bubble sort finds out the maximum number of runs and wickets taken by any individual in the match
        -> Run ratio and Wicket ratio for every player is found out by dividing their contribution with the max values
        -> The Run ratio and Wicket ratio is added up, which is then called "performance index"
        -> The player with the highest performance ratio is declared as the man of the match
    It is to be noted that the following logic only finds out the best "All Rounder" of the match. However, as
    there is a lack of in depth information, the man of the match cannot be justifiably chosen. As a result, the
    player with the highest performance ratio is deemed "man of the match"*/

    //  max wicket and run finder
    for(int i=0;i<2;i++){
        for(int j=0;j<11;j++){
            if(t[i].wickets_player[j]>max_wickets)
                max_wickets=t[i].wickets_player[j];
            else if(t[i].runs_player[j]>max_runs)
                max_runs=t[i].runs_player[j];
            }
    }
    //  Performance index initialization
    for(int i=0;i<2;i++){
        for(int j=0;j<11;j++){
            t[i].performance_index[j]=0;
            }
    }
    //  Performance index calculation
    for(int i=0;i<2;i++){
        for(int j=0;j<11;j++){
            t[i].performance_index[j]=(((float)t[i].runs_player[j]/(float)max_runs)+((float)t[i].wickets_player[j]/(float)max_wickets))*100;
            }
    }
    //  finds Man of the Match
    for(int i=0;i<2;i++){
        for(int j=0;j<11;j++){
            if(mom_performance_index<t[i].performance_index[j]){
                mom_performance_index=t[i].performance_index[j];
                strcpy(mom,t[i].name_player[j]);
            }
        }
    }


//  finds out the total runs of each team
    t[0].runs_total=0;
    t[1].runs_total=0;
    for(int i=0;i<2;i++){
        for(int j=0;j<11;j++){
            t[i].runs_total+=t[i].runs_player[j];
        }
    }


//  Decides the winner of the match
    if(t[0].runs_total>t[1].runs_total){
        strcpy(winning_team, "The Winner is ");
        strcat(winning_team, t[0].name_team);
        strcat(winning_team, "!!!");
    }
    else if (t[1].runs_total>t[0].runs_total){
        strcpy(winning_team, "The Winner is ");
        strcat(winning_team, t[1].name_team);
        strcat(winning_team, "!!!");
    }
    else if (t[1].runs_total==t[0].runs_total)
        strcpy(winning_team, "The match is a draw!!!");


//  Clears the Screen
system("cls");


//  Prints the result in the console
    printf("-------------------------------\n");
    printf("| MATCH SUMMARY IS GIVEN BELOW:", name_venue); printf("\n");
    printf("-------------------------------\n");
     printf("\n");
    printf(" Name of the venue: %s\n", name_venue);
    for(int i=0;i<2;i++){
        printf(" Name of Umpire %d is: %s \t", i+1, name_umpire[i]);
    }
    printf("\n"); printf("\n");
    printf(" %s\n", winning_team);
    printf("\n");
    printf(" With a performance score of %.2f, the man of the Match is %s! \n", mom_performance_index, mom);
    printf("\n");
    printf(" NAME\t\t\t");
    printf("TEAM\t\t");
    printf("  ROLE\t\t");
    printf("RUNS\t");
    printf("WICKETS\t");
    printf("PERFORMANCE\n");
    printf("\n");


    for (int i=0;i<11;i++) {
        printf(" %-23s", t[0].name_player[i]);
        printf("%-18s", t[0].name_team);
        printf("%-14s", t[0].role_player[i]);
        printf("%-3d\t", t[0].runs_player[i]);
        printf("%-3d\t", t[0].wickets_player[i]);
        printf("%.2f", t[0].performance_index[i]);
        printf("\n");
    }
    for (int i=0;i<11;i++) {
        printf(" %-23s", t[1].name_player[i]);
        printf("%-18s", t[1].name_team);
        printf("%-14s", t[1].role_player[i]);
        printf("%-3d\t", t[1].runs_player[i]);
        printf("%-3d\t", t[1].wickets_player[i]);
        printf("%.2f", t[1].performance_index[i]);
        printf("\n");
    }
    printf("\n");
    printf("\n");

//  Asks if you want to generate another summary
    printf(" DO YOU WANT TO GENERATE SUMMARY FOR ANOTHER MATCH? [Y/N]: ");
    response = getche();

    }while(response != 'N' && response != 'n');

// Thank you message

    printf("\n");
    printf("\n");
    printf("---------------------------------------------\n");
    printf("| THANK YOU FOR USING THE SUMMARY GENERATOR!\n");
    printf("---------------------------------------------\n");
    getchar();

    return 0;
}

