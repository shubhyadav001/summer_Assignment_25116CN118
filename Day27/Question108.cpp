//Write a program to Create marksheet generation system.
#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    int marks1, marks2, marks3;
    int total;
    float percentage;
    char grade;
};

int main() {
    struct Student s;

    printf("===== Marksheet Generation System =====\n");

    printf("Enter Roll Number: ");
    scanf("%d", &s.roll);

    printf("Enter Student Name: ");
    scanf("%s", s.name);

    printf("Enter marks of Subject 1: ");
    scanf("%d", &s.marks1);

    printf("Enter marks of Subject 2: ");
    scanf("%d", &s.marks2);

    printf("Enter marks of Subject 3: ");
    scanf("%d", &s.marks3);

    // Calculate total and percentage
    s.total = s.marks1 + s.marks2 + s.marks3;
    s.percentage = s.total / 3.0;

    // Calculate grade
    if (s.percentage >= 90)
        s.grade = 'A';
    else if (s.percentage >= 75)
        s.grade = 'B';
    else if (s.percentage >= 60)
        s.grade = 'C';
    else if (s.percentage >= 40)
        s.grade = 'D';
    else
        s.grade = 'F';

    // Display Marksheet
    printf("\n===== Student Marksheet =====\n");
    printf("Roll Number: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Subject 1 Marks: %d\n", s.marks1);
    printf("Subject 2 Marks: %d\n", s.marks2);
    printf("Subject 3 Marks: %d\n", s.marks3);
    printf("Total Marks: %d/300\n", s.total);
    printf("Percentage: %.2f%%\n", s.percentage);
    printf("Grade: %c\n", s.grade);

    if (s.grade == 'F')
        printf("Result: Fail\n");
    else
        printf("Result: Pass\n");

    return 0;
}
