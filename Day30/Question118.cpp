//Write a program to Create mini library system.
#include <stdio.h>
#include <string.h>

int main() {
    int bookId[100];
    char bookName[100][50];
    char author[100][50];
    int issued[100];

    int n = 0, choice, searchId, i, found;

    do {
        printf("\n===== Mini Library System =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("\nEnter Book ID: ");
                scanf("%d", &bookId[n]);

                printf("Enter Book Name: ");
                scanf("%s", bookName[n]);

                printf("Enter Author Name: ");
                scanf("%s", author[n]);

                issued[n] = 0;

                n++;

                printf("Book added successfully!\n");
                break;

            case 2:
                if (n == 0) {
                    printf("No books available.\n");
                }
                else {
                    printf("\n===== Book List =====\n");

                    for (i = 0; i < n; i++) {
                        printf("\nBook ID: %d", bookId[i]);
                        printf("\nBook Name: %s", bookName[i]);
                        printf("\nAuthor: %s", author[i]);

                        if (issued[i])
                            printf("\nStatus: Issued\n");
                        else
                            printf("\nStatus: Available\n");
                    }
                }
                break;

            case 3:
                printf("\nEnter Book ID to search: ");
                scanf("%d", &searchId);

                found = 0;

                for (i = 0; i < n; i++) {
                    if (bookId[i] == searchId) {
                        printf("\nBook Found:");
                        printf("\nBook ID: %d", bookId[i]);
                        printf("\nBook Name: %s", bookName[i]);
                        printf("\nAuthor: %s\n", author[i]);

                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Book not found.\n");

                break;

            case 4:
                printf("\nEnter Book ID to issue: ");
                scanf("%d", &searchId);

                found = 0;

                for (i = 0; i < n; i++) {
                    if (bookId[i] == searchId) {
                        if (issued[i])
                            printf("Book is already issued.\n");
                        else {
                            issued[i] = 1;
                            printf("Book issued successfully.\n");
                        }

                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Book not found.\n");

                break;

            case 5:
                printf("\nEnter Book ID to return: ");
                scanf("%d", &searchId);

                found = 0;

                for (i = 0; i < n; i++) {
                    if (bookId[i] == searchId) {
                        issued[i] = 0;
                        printf("Book returned successfully.\n");

                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Book not found.\n");

                break;

            case 6:
                printf("Exiting Mini Library System...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 6);

    return 0;
}