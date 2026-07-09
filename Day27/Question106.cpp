//Write a program to Create employee management system.
#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp[100];
    int n = 0, choice, searchId, i, found;

    do {
        printf("\n===== Employee Management System =====\n");
        printf("1. Add Employee Record\n");
        printf("2. Display Employee Records\n");
        printf("3. Search Employee Record\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("\nEnter Employee ID: ");
                scanf("%d", &emp[n].id);

                printf("Enter Employee Name: ");
                scanf("%s", emp[n].name);

                printf("Enter Employee Salary: ");
                scanf("%f", &emp[n].salary);

                n++;
                printf("Employee record added successfully!\n");
                break;

            case 2:
                if (n == 0) {
                    printf("No employee records available.\n");
                } else {
                    printf("\nEmployee Records:\n");
                    for (i = 0; i < n; i++) {
                        printf("\nEmployee ID: %d", emp[i].id);
                        printf("\nName: %s", emp[i].name);
                        printf("\nSalary: %.2f\n", emp[i].salary);
                    }
                }
                break;

            case 3:
                printf("\nEnter Employee ID to search: ");
                scanf("%d", &searchId);

                found = 0;

                for (i = 0; i < n; i++) {
                    if (emp[i].id == searchId) {
                        printf("\nEmployee Found:");
                        printf("\nEmployee ID: %d", emp[i].id);
                        printf("\nName: %s", emp[i].name);
                        printf("\nSalary: %.2f\n", emp[i].salary);
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Employee record not found.\n");

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