#include <stdio.h>


struct Book {
    char title[50];
    char author[50];
    int year;
};

struct Library {
    struct Book books[100];
    int count;
};

void addBook(struct Library *lib) {
    if (lib->count >= 100) {
        printf("The library is full. Cannot add more books.\n");
        return;
    }

    struct Book newBook;

    printf("Enter the title of the book: ");
    scanf("%s",&newBook.title);
    gets(newBook.author);

    printf("Enter the author of the book: ");
    gets(newBook.author);

    printf("Enter the year of publication: ");
    scanf("%d",&newBook.year);


    lib->books[lib->count] = newBook;
    lib->count++;

    printf("Book added successfully.\n");
}

void displayBook(struct Book book) {
    printf("Title: %s\n", book.title);
    printf("Author: %s\n", book.author);
    printf("Year: %d\n", book.year);
    printf("------------------------------\n");
}

void booksbyTitle(struct Library *lib){
     char searchTitle[50];
    printf("Enter the title name to display: ");
   gets(searchTitle);

    int found = 0;

    printf("List of books by %s:\n", searchTitle);
    printf("------------------------------\n");

    for (int i = 0; i < lib->count; i++) {
        if (strcmp(lib->books[i].title, searchTitle) == 0) {
            displayBook(lib->books[i]);
            found = 1;
        }
    }

    if (!found) {
        printf("No books found by the given tittle.\n");
    }
}

void listBooksByAuthor(struct Library *lib) {
    if (lib->count == 0) {
        printf("The library is empty.\n");
        return;
    }

    char searchAuthor[50];
    printf("Enter the author name to search for: ");
   gets(searchAuthor);

    int found = 0;

    printf("List of books by %s:\n", searchAuthor);
    printf("------------------------------\n");

    for (int i = 0; i < lib->count; i++) {
        if (strcmp(lib->books[i].author, searchAuthor) == 0) {
            displayBook(lib->books[i]);
            found = 1;
        }
    }

    if (!found) {
        printf("No books found by the given author.\n");
    }
}

void listTitlesOfBooks(struct Library *lib) {
    if (lib->count == 0) {
        printf("The library is empty.\n");
        return;
    }

    int numTitles;
    printf("Enter the number of titles to display: ");
    scanf("%d", &numTitles);
    getchar();

    if (numTitles > lib->count) {
        printf("The library has fewer books than the specified number of titles.\n");
        return;
    }

    printf("List of titles of specified books:\n");

    for (int i = 0; i < numTitles; i++) {
        printf("Title: %s\n", lib->books[i].title);

    }
}

void countBooks(struct Library *lib) {
    printf("Total number of books in the library: %d\n", lib->count);
}

int main() {
    struct Library library;
    library.count = 0;

    int choice;

    do {
        printf("\n# # C Project on Library Management # #\n");
        printf("\n");
        printf("1. Add book information\n");
        printf("2. Display book information\n");
        printf("3. List all books of given author\n");
        printf("4. List title of specified book\n");
        printf("5. List the count of books in the library\n");
        printf("6. Exit\n");
        printf("Enter one of the above: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                addBook(&library);
                break;
            case 2:
               booksbyTitle(&library);
                break;
            case 3:
                listBooksByAuthor(&library);
                break;
            case 4:
                listTitlesOfBooks(&library);
                break;
            case 5:
                countBooks(&library);
                break;
            case 6:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 6);

    return 0;
}

