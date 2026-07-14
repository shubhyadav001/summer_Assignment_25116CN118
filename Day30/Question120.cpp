//Write a program to Develop complete mini project using arrays, strings and functions.

//Here is a C program to develop a complete Mini Student Management Project using Arrays, Strings, and Functions.

//Features:
//Add Student Record
//Display All Students
//Search Student
//Update Marks
//Delete Student
//Calculate Result
//Exit

#include <stdio.h>
#include <string.h>

#define MAX 100

int roll[MAX], marks[MAX];
char name[MAX][50];
int count = 0;

// Function to add student
void addStudent() {
    printf("\nEnter Roll Number: ");
    scanf("%d", &roll[count]);

    printf("Enter Student Name: ");
    scanf("%s", name[count]);

    printf("Enter Marks: ");
    scanf("%d", &marks[count]);

    count++;

    printf("Student added successfully!\n");
}

// Function to display students
void displayStudents() {
    int i;

    if (count == 0) {
        printf("No student records available.\n");
        return;
    }

    printf("\n===== Student Records =====\n");

    for (i = 0; i < count; i++) {
        printf("\nRoll No: %d", roll[i]);
        printf("\nName: %s", name[i]);
        printf("\nMarks: %d", marks[i]);

        if (marks[i] >= 40)
            printf("\nResult: Pass\n");
        else
            printf("\nResult: Fail\n");
    }
}

// Function to search student
void searchStudent() {
    int r, i, found = 0;

    printf("\nEnter Roll Number to search: ");
    scanf("%d", &r);

    for (i = 0; i < count; i++) {
        if (roll[i] == r) {
            printf("\nStudent Found:");
            printf("\nRoll No: %d", roll[i]);
            printf("\nName: %s", name[i]);
            printf("\nMarks: %d\n", marks[i]);

            found = 1;
            break;
        }
    }

    if (!found)
        printf("Student not found.\n");
}

// Function to update marks
void updateMarks() {
    int r, newMarks, i, found = 0;

    printf("\nEnter Roll Number: ");
    scanf("%d", &r);

    for (i = 0; i < count; i++) {
        if (roll[i] == r) {
            printf("Enter new marks: ");
            scanf("%d", &newMarks);

            marks[i] = newMarks;

            printf("Marks updated successfully!\n");

            found = 1;
            break;
        }
    }

    if (!found)
        printf("Student not found.\n");
}

// Function to delete student
void deleteStudent() {
    int r, i, j, found = 0;

    printf("\nEnter Roll Number to delete: ");
    scanf("%d", &r);

    for (i = 0; i < count; i++) {
        if (roll[i] == r) {

            for (j = i; j < count - 1; j++) {
                roll[j] = roll[j + 1];
                marks[j] = marks[j + 1];
                strcpy(name[j], name[j + 1]);
            }

            count--;

            printf("Student deleted successfully!\n");

            found = 1;
            break;
        }
    }

    if (!found)
        printf("Student not found.\n");
}

// Main Function
int main() {

    int choice;

    do {
        printf("\n===== Mini Student Management Project =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Marks\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                updateMarks();
                break;

            case 5:
                deleteStudent();
                break;

            case 6:
                printf("Exiting Project...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 6);

    return 0;
}


//Sample Output
//===== Mini Student Management Project =====
//1. Add Student
//2. Display Students
//3. Search Student
//4. Update Marks
//5. Delete Student
//6. Exit

//Enter your choice: 1

//Enter Roll Number: 101
//Enter Student Name: Rahul
//Enter Marks: 85

//Student added successfully!

//Enter your choice: 2

//===== Student Records =====

//Roll No: 101
//Name: Rahul
//Marks: 85
//Result: Pass