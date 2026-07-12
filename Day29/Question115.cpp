//Write a program to Create menu-driven string operations system.
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], result[200];
    int choice;

    printf("Enter first string: ");
    scanf("%s", str1);

    do {
        printf("\n===== String Operations System =====\n");
        printf("1. Find Length of String\n");
        printf("2. Copy String\n");
        printf("3. Concatenate Strings\n");
        printf("4. Compare Strings\n");
        printf("5. Reverse String\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Length of string = %lu\n", strlen(str1));
                break;

            case 2:
                strcpy(str2, str1);
                printf("Copied String: %s\n", str2);
                break;

            case 3:
                printf("Enter second string: ");
                scanf("%s", str2);

                strcpy(result, str1);
                strcat(result, str2);

                printf("Concatenated String: %s\n", result);
                break;

            case 4:
                printf("Enter second string: ");
                scanf("%s", str2);

                if (strcmp(str1, str2) == 0)
                    printf("Strings are equal.\n");
                else
                    printf("Strings are not equal.\n");

                break;

            case 5:
                printf("Reverse of string: ");

                for (int i = strlen(str1) - 1; i >= 0; i--) {
                    printf("%c", str1[i]);
                }

                printf("\n");
                break;

            case 6:
                printf("Exiting String Operations System...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 6);

    return 0;
}