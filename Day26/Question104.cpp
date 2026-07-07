//Write a program to Create quiz application. 
#include <stdio.h>

int main() {
    int choice, score = 0;

    printf("===== Quiz Application =====\n");

    // Question 1
    printf("\n1. What is the capital of India?\n");
    printf("1. Mumbai\n2. New Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 2)
        score++;

    // Question 2
    printf("\n2. Which language is used for system programming?\n");
    printf("1. C\n2. HTML\n3. CSS\n4. SQL\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
        score++;

    // Question 3
    printf("\n3. How many days are there in a leap year?\n");
    printf("1. 365\n2. 364\n3. 366\n4. 360\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 3)
        score++;

    // Display Result
    printf("\n===== Quiz Result =====\n");
    printf("Your Score: %d/3\n", score);

    if (score == 3)
        printf("Excellent!\n");
    else if (score == 2)
        printf("Good Job!\n");
    else
        printf("Better Luck Next Time!\n");

    return 0;
}