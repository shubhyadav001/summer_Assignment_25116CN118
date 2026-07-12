//Write a program to Create contact management system.
#include <stdio.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone[15];
    char email[50];
};

int main() {
    struct Contact contacts[100];
    int n = 0, choice, i, found;
    char searchName[50];

    do {
        printf("\n===== Contact Management System =====\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("\nEnter Name: ");
                scanf("%s", contacts[n].name);

                printf("Enter Phone Number: ");
                scanf("%s", contacts[n].phone);

                printf("Enter Email: ");
                scanf("%s", contacts[n].email);

                n++;

                printf("Contact added successfully!\n");
                break;

            case 2:
                if (n == 0) {
                    printf("No contacts available.\n");
                }
                else {
                    printf("\n===== Contact List =====\n");

                    for (i = 0; i < n; i++) {
                        printf("\nName: %s", contacts[i].name);
                        printf("\nPhone: %s", contacts[i].phone);
                        printf("\nEmail: %s\n", contacts[i].email);
                    }
                }
                break;

            case 3:
                printf("\nEnter name to search: ");
                scanf("%s", searchName);

                found = 0;

                for (i = 0; i < n; i++) {
                    if (strcmp(contacts[i].name, searchName) == 0) {
                        printf("\nContact Found:");
                        printf("\nName: %s", contacts[i].name);
                        printf("\nPhone: %s", contacts[i].phone);
                        printf("\nEmail: %s\n", contacts[i].email);
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Contact not found.\n");

                break;

            case 4:
                printf("\nEnter name to delete: ");
                scanf("%s", searchName);

                found = 0;

                for (i = 0; i < n; i++) {
                    if (strcmp(contacts[i].name, searchName) == 0) {
                        found = 1;

                        for (int j = i; j < n - 1; j++) {
                            contacts[j] = contacts[j + 1];
                        }

                        n--;
                        printf("Contact deleted successfully.\n");
                        break;
                    }
                }

                if (!found)
                    printf("Contact not found.\n");

                break;

            case 5:
                printf("Exiting Contact Management System...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 5);

    return 0;
}