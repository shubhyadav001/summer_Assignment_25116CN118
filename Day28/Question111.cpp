//Write a program to Create ticket booking system.
#include <stdio.h>

struct Ticket {
    int ticketId;
    char name[50];
    int age;
    char destination[50];
};

int main() {
    struct Ticket t[100];
    int n = 0, choice, id, i, found;

    do {
        printf("\n===== Ticket Booking System =====\n");
        printf("1. Book Ticket\n");
        printf("2. Display Bookings\n");
        printf("3. Cancel Ticket\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("\nEnter Ticket ID: ");
                scanf("%d", &t[n].ticketId);

                printf("Enter Passenger Name: ");
                scanf("%s", t[n].name);

                printf("Enter Age: ");
                scanf("%d", &t[n].age);

                printf("Enter Destination: ");
                scanf("%s", t[n].destination);

                n++;

                printf("Ticket booked successfully!\n");
                break;

            case 2:
                if (n == 0) {
                    printf("No bookings available.\n");
                }
                else {
                    printf("\n===== Booking Details =====\n");

                    for (i = 0; i < n; i++) {
                        printf("\nTicket ID: %d", t[i].ticketId);
                        printf("\nPassenger Name: %s", t[i].name);
                        printf("\nAge: %d", t[i].age);
                        printf("\nDestination: %s\n", t[i].destination);
                    }
                }
                break;

            case 3:
                printf("\nEnter Ticket ID to cancel: ");
                scanf("%d", &id);

                found = 0;

                for (i = 0; i < n; i++) {
                    if (t[i].ticketId == id) {
                        found = 1;

                        // Shift records after cancellation
                        for (int j = i; j < n - 1; j++) {
                            t[j] = t[j + 1];
                        }

                        n--;
                        printf("Ticket cancelled successfully.\n");
                        break;
                    }
                }

                if (!found)
                    printf("Ticket not found.\n");

                break;

            case 4:
                printf("Thank you for using Ticket Booking System.\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 4);

    return 0;
}