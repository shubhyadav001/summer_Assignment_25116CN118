//Write a program to Create menu-driven array operations system.
#include <stdio.h>

int main() {
    int arr[100], n = 0;
    int choice, value, pos, i, found;

    do {
        printf("\n===== Array Operations System =====\n");
        printf("1. Insert Element\n");
        printf("2. Display Array\n");
        printf("3. Search Element\n");
        printf("4. Delete Element\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter element to insert: ");
                scanf("%d", &value);

                arr[n] = value;
                n++;

                printf("Element inserted successfully.\n");
                break;

            case 2:
                if (n == 0) {
                    printf("Array is empty.\n");
                }
                else {
                    printf("Array elements are: ");
                    for (i = 0; i < n; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                }
                break;

            case 3:
                printf("Enter element to search: ");
                scanf("%d", &value);

                found = 0;

                for (i = 0; i < n; i++) {
                    if (arr[i] == value) {
                        printf("Element found at position %d\n", i + 1);
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Element not found.\n");

                break;

            case 4:
                printf("Enter position to delete: ");
                scanf("%d", &pos);

                if (pos > 0 && pos <= n) {
                    for (i = pos - 1; i < n - 1; i++) {
                        arr[i] = arr[i + 1];
                    }

                    n--;
                    printf("Element deleted successfully.\n");
                }
                else {
                    printf("Invalid position.\n");
                }

                break;

            case 5:
                printf("Exiting Array Operations System...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 5);

    return 0;
}