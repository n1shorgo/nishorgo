#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 int valid_voters[] = {202236023,202236024,202236009,202236003,202236047,202236033,202236007,202236006};
 int Blocked_voters[] ={202236007,202236006};
 int VotersPassword[] = {202223,202224,202209,202203,202247,202233,202207,202206};
 int VoterID;
 int Voterpass;

struct candidate {
  char name[50];
  int votes;
};

int main() {

    int t=0,i,n,j;
    login:
    printf("Enter Voter ID: ");
    scanf("%d",&VoterID);

    for(j=0;j<2;j++){
       if(VoterID == Blocked_voters[j]){
          printf("You have been blocked from voting");
          exit(0);
         }else{
             break;
         }
    }

    printf("\nPassword: ");
    scanf("%d",&Voterpass);

    for(i=0;i<8;i++){
       if(VoterID == valid_voters[i]){
         t = 1;
         n = i;
         }
    }
    if(t==1){

       if(Voterpass != VotersPassword[n]){
        printf("Wrong password");
        goto login;
       }

    }else{
    printf("Wrong username");
    printf("\n");
    goto login;
    }

  // Create a file to store the candidates.
  FILE *file = fopen("candidates.txt", "w");
  if (file == NULL) {
    printf("Could not open file.\n");
    exit(1);
  }

  // Add the candidates to the file.
  struct candidate candidates[] = {
    {"John Smith", 0},
    {"Jane Doe", 0},
    {"Mary Jones", 0},
  };
  for (int i = 0; i < sizeof(candidates) / sizeof(candidates[0]); i++) {
    fprintf(file, "%s %d\n", candidates[i].name, candidates[i].votes);
  }

  // Close the file.
  fclose(file);

  // Read the candidates from the file.
  struct candidate readCandidates[3];
  file = fopen("candidates.txt", "r");
  if (file == NULL) {
    printf("Could not open file.\n");
    exit(1);
  }

  for (int i = 0; i < sizeof(readCandidates) / sizeof(readCandidates[0]); i++) {
    fscanf(file, "%s %d", readCandidates[i].name, &readCandidates[i].votes);
  }

  fclose(file);

  // Display the candidate list to the voter.
  printf("Candidate List:\n");
  for (int i = 0; i < sizeof(readCandidates) / sizeof(readCandidates[0]); i++) {
    printf("%d. %s\n", i + 1, readCandidates[i].name);
  }

  // Prompt the voter to select a candidate.
  int choice;
  printf("Select a candidate (1-%d): ", sizeof(readCandidates) / sizeof(readCandidates[0]));
  scanf("%d", &choice);

  // Validate the choice.
  if (choice < 1 || choice > sizeof(readCandidates) / sizeof(readCandidates[0])) {
    printf("Invalid choice.\n");
    exit(1);
  }

  // Increment the selected candidate's vote count.
  readCandidates[choice - 1].votes++;

  // Update the file with the new vote counts.
  file = fopen("candidates.txt", "w");
  if (file == NULL) {
    printf("Could not open file.\n");
    exit(1);
  }

  for (int i = 0; i < sizeof(readCandidates) / sizeof(readCandidates[0]); i++) {
    fprintf(file, "%s %d\n", readCandidates[i].name, readCandidates[i].votes);
  }

  fclose(file);

  printf("Vote recorded. Thank you!\n");

  return 0;
}
