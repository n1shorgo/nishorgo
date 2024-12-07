#include <stdio.h>

#define TOTAL_CANDIDATES 3

struct Candidate {
    char name[50];
    int voteCount;
};

void castVote(struct Candidate candidates[], int candidateCount) {
    int candidateNumber;

    printf("Available candidates:\n");
    for (int i = 0; i < candidateCount; i++) {
        printf("%d. %s\n", i + 1, candidates[i].name);
    }

    printf("Enter the candidate number to cast your vote (1-%d): ", candidateCount);
    scanf("%d", &candidateNumber);

    // Increment the vote count for the selected candidate
    candidates[candidateNumber - 1].voteCount++;

    printf("Vote casted successfully!\n");
}

void printVoteCount(struct Candidate candidates[], int candidateCount) {
    printf("Vote count:\n");
    for (int i = 0; i < candidateCount; i++) {
        printf("%s: %d\n", candidates[i].name, candidates[i].voteCount);
    }
}

void printLeadingCandidate(struct Candidate candidates[], int candidateCount) {
    int maxVotes = 0;
    int leadingCandidateIndex = 0;

    for (int i = 0; i < candidateCount; i++) {
        if (candidates[i].voteCount > maxVotes) {
            maxVotes = candidates[i].voteCount;
            leadingCandidateIndex = i;
        }
    }

    printf("Leading candidate: %s\n", candidates[leadingCandidateIndex].name);
}

int main() {
    struct Candidate candidates[TOTAL_CANDIDATES] = {
        {"Candidate 1", 0},
        {"Candidate 2", 0},
        {"Candidate 3", 0}
    };

    int choice;

    do {
        printf("\n-- Voting System Menu --\n");
        printf("1. Cast Vote\n");
        printf("2. View Vote Count\n");
        printf("3. View Leading Candidate\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                castVote(candidates, TOTAL_CANDIDATES);
                break;
            case 2:
                printVoteCount(candidates, TOTAL_CANDIDATES);
                break;
            case 3:
                printLeadingCandidate(candidates, TOTAL_CANDIDATES);
                break;
            case 4:
                printf("Exiting the program. Thank you!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
