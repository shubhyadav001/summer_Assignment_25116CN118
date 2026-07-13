//Write a program to Create mini employee management system.
#include <stdio.h>
#include <string.h>

int main() {
    int empId[100];
    char name[100][50];
    float salary[100];

    int n = 0, choice, searchId, i, found;

    do {
        printf("\n===== Mini Employee Management System =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("\nEnter Employee ID: ");
                scanf("%d", &empId[n]);

                printf("Enter Employee Name: ");
                scanf("%s", name[n]);

                printf("Enter Employee Salary: ");
                scanf("%f", &salary[n]);

                n++;

                printf("Employee added successfully!\n");
                break;

            case 2:
                if (n == 0) {
                    printf("No employee records available.\n");
                }
                else {
                    printf("\n===== Employee Records =====\n");

                    for (i = 0; i < n; i++) {
                        printf("\nEmployee ID: %d", empId[i]);
                        printf("\nName: %s", name[i]);
                        printf("\nSalary: %.2f\n", salary[i]);
                    }
                }
                break;

            case 3:
                printf("\nEnter Employee ID to search: ");
                scanf("%d", &searchId);

                found = 0;

                for (i = 0; i < n; i++) {
                    if (empId[i] == searchId) {
                        printf("\nEmployee Found:");
                        printf("\nEmployee ID: %d", empId[i]);
                        printf("\nName: %s", name[i]);
                        printf("\nSalary: %.2f\n", salary[i]);

                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Employee not found.\n");

                break;

            case 4:
                printf("Exiting Employee Management System...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 4);

    return 0;
}