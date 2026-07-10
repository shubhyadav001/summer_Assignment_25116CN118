//Write a program to Create library management system.
#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char name[50];
    char author[50];
    int issued;
};

int main() {
    struct Book books[100];
    int n = 0, choice, searchId, i, found;

    do {
        printf("\n===== Library Management System =====\n");
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
                scanf("%d", &books[n].id);

                printf("Enter Book Name: ");
                scanf("%s", books[n].name);

                printf("Enter Author Name: ");
                scanf("%s", books[n].author);

                books[n].issued = 0;

                n++;
                printf("Book added successfully!\n");
                break;

            case 2:
                if (n == 0) {
                    printf("No books available.\n");
                } 
                else {
                    printf("\nBook Records:\n");

                    for (i = 0; i < n; i++) {
                        printf("\nBook ID: %d", books[i].id);
                        printf("\nBook Name: %s", books[i].name);
                        printf("\nAuthor: %s", books[i].author);

                        if (books[i].issued)
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
                    if (books[i].id == searchId) {
                        printf("\nBook Found:");
                        printf("\nBook ID: %d", books[i].id);
                        printf("\nBook Name: %s", books[i].name);
                        printf("\nAuthor: %s\n", books[i].author);
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

                for (i = 0; i < n; i++) {
                    if (books[i].id == searchId) {
                        if (books[i].issued)
                            printf("Book is already issued.\n");
                        else {
                            books[i].issued = 1;
                            printf("Book issued successfully.\n");
                        }
                        break;
                    }
                }
                break;

            case 5:
                printf("\nEnter Book ID to return: ");
                scanf("%d", &searchId);

                for (i = 0; i < n; i++) {
                    if (books[i].id == searchId) {
                        books[i].issued = 0;
                        printf("Book returned successfully.\n");
                        break;
                    }
                }
                break;

            case 6:
                printf("Exiting Library Management System...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 6);

    return 0;
}