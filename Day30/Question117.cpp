//Write a program to Create student record system using arrays and strings.
#include <stdio.h>
#include <string.h>

int main() {
    int roll[100], marks[100];
    char name[100][50];
    int n = 0, choice, searchRoll, i, found;

    do {
        printf("\n===== Student Record System =====\n");
        printf("1. Add Student Record\n");
        printf("2. Display Student Records\n");
        printf("3. Search Student Record\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("\nEnter Roll Number: ");
                scanf("%d", &roll[n]);

                printf("Enter Student Name: ");
                scanf("%s", name[n]);

                printf("Enter Marks: ");
                scanf("%d", &marks[n]);

                n++;

                printf("Student record added successfully!\n");
                break;

            case 2:
                if (n == 0) {
                    printf("No records available.\n");
                }
                else {
                    printf("\n===== Student Records =====\n");

                    for (i = 0; i < n; i++) {
                        printf("\nRoll Number: %d", roll[i]);
                        printf("\nName: %s", name[i]);
                        printf("\nMarks: %d\n", marks[i]);
                    }
                }
                break;

            case 3:
                printf("\nEnter Roll Number to search: ");
                scanf("%d", &searchRoll);

                found = 0;

                for (i = 0; i < n; i++) {
                    if (roll[i] == searchRoll) {
                        printf("\nStudent Found:");
                        printf("\nRoll Number: %d", roll[i]);
                        printf("\nName: %s", name[i]);
                        printf("\nMarks: %d\n", marks[i]);

                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Student record not found.\n");

                break;

            case 4:
                printf("Exiting Student Record System...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 4);

    return 0;
}
