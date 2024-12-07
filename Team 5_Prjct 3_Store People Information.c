#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person {
    char name[50];
    char firstName[50];
    int age;
};

void createFile() {
    FILE *file = fopen("people.txt", "w");
    if (file == NULL) {
        printf("Error creating file!\n");
        return;
    }

    int n;
    printf("Enter the number of people: ");
    scanf("%d", &n);
    getchar();

    struct Person person;
    for (int i = 0; i < n; i++) {
        printf("Person %d:\n", i + 1);
        printf("Name: ");
        fgets(person.name, sizeof(person.name), stdin);
        printf("First Name: ");
        fgets(person.firstName, sizeof(person.firstName), stdin);
        printf("Age: ");
        scanf("%d", &person.age);
        getchar();

        fprintf(file, "%s;%s;%d\n", person.name, person.firstName, person.age);
    }

    fclose(file);
}

void displayFile() {
    FILE *file = fopen("people.txt", "r");
    if (file == NULL) {
        printf("File not found!\n");
        return;
    }

    struct Person person;
    int count = 1;
    while (fscanf(file, "%[^;];%[^;];%d\n", person.name, person.firstName, &person.age) == 3) {
        printf("Person %d:\n", count++);
        printf("Name: %s\n", person.name);
        printf("First Name: %s\n", person.firstName);
        printf("Age: %d\n", person.age);
        printf("------------------------\n");
    }

    fclose(file);
}

void addInfoToFile() {
    FILE *file = fopen("people.txt", "a");
    if (file == NULL) {
        printf("File not found!\n");
        return;
    }

    struct Person person;

    printf("Name: ");
    fgets(person.name, sizeof(person.name), stdin);
    printf("First Name: ");
    fgets(person.firstName, sizeof(person.firstName), stdin);
    printf("Age: ");
    scanf("%d", &person.age);
    getchar();

    fprintf(file, "%s;%s;%d\n", person.name, person.firstName, person.age);

    fclose(file);
}

float calculateAverageAge() {
    FILE *file = fopen("people.txt", "r");
    if (file == NULL) {
        printf("File not found!\n");
        return 0;
    }

    struct Person person;
    int count = 0;
    int sum = 0;
    while (fscanf(file, "%[^;];%[^;];%d\n", person.name, person.firstName, &person.age) == 3) {
        sum += person.age;
        count++;
    }

    fclose(file);

    if (count == 0)
        return 0;

    return (float)sum / count;
}

void sortFileContents() {
    printf("Sorting has not been implemented.\n");
}

void removePerson() {
    FILE *sourceFile = fopen("people.txt", "r");
    if (sourceFile == NULL) {
        printf("File not found!\n");
        return;
    }

    FILE *tempFile = fopen("temp.txt", "w");
    if (tempFile == NULL) {
        printf("Error creating temporary file!\n");
        fclose(sourceFile);
        return;
    }

    struct Person person;
    char searchName[50];
    printf("Enter the name of the person to remove: ");
    fgets(searchName, sizeof(searchName), stdin);

    int found = 0;
    while (fscanf(sourceFile, "%[^;];%[^;];%d\n", person.name, person.firstName, &person.age) == 3) {
        if (strcmp(person.name, searchName) != 0) {
            fprintf(tempFile, "%s;%s;%d\n", person.name, person.firstName, person.age);
        } else {
            found = 1;
        }
    }

    fclose(sourceFile);
    fclose(tempFile);

    if (found) {
        remove("people.txt");
        rename("temp.txt", "people.txt");
        printf("Person removed successfully.\n");
    } else {
        printf("Person not found in the file.\n");
        remove("temp.txt");
    }
}

void CorrectnessInformationAnalysis() {
    FILE *file = fopen("people.txt", "r");
    if (file == NULL) {
        printf("File not found!\n");
        return;
    }

    struct Person person;
    int incorrectCount = 0;
    while (fscanf(file, "%[^;];%[^;];%d\n", person.name, person.firstName, &person.age) == 3) {
        if (person.age <= 0) {
            printf("Incorrect age found for person: %s %s\n", person.firstName, person.name);
            incorrectCount++;
        }
    }

    if (incorrectCount == 0) {
        printf("All ages in the file are correct.\n");
    } else {
        printf("Total incorrect ages found: %d\n", incorrectCount);
    }

    fclose(file);
}

int main() {
    int choice;
    do {
        printf("\n### Main Menu ###\n");
        printf("1. File creation\n");
        printf("2. Display the content of the file\n");
        printf("3. Add info to file\n");
        printf("4. Age average calculation\n");
        printf("5. Sort file contents\n");
        printf("6. Person removal\n");
        printf("7. Correctness information analysis\n");
        printf("8. End program\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                createFile();
                break;
            case 2:
                displayFile();
                break;
            case 3:
                addInfoToFile();
                break;
            case 4:
                printf("Average Age: %.2f\n", calculateAverageAge());
                break;
            case 5:
                sortFileContents();
                printf("File contents sorting is not implemented.\n");
                break;
            case 6:
                removePerson();
                break;
            case 7:
                CorrectnessInformationAnalysis();
                break;
            case 8:
                printf("Program ended.\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 8);

    return 0;
}
