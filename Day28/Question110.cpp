//Write a program to Create bank account system.
#include <stdio.h>

struct Account {
    int accountNo;
    char name[50];
    float balance;
};

int main() {
    struct Account acc;
    int choice;
    float amount;
    int created = 0;

    do {
        printf("\n===== Bank Account System =====\n");
        printf("1. Create Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Check Balance\n");
        printf("5. Display Account Details\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("\nEnter Account Number: ");
                scanf("%d", &acc.accountNo);

                printf("Enter Account Holder Name: ");
                scanf("%s", acc.name);

                printf("Enter Initial Balance: ");
                scanf("%f", &acc.balance);

                created = 1;
                printf("Account created successfully!\n");
                break;

            case 2:
                if (created) {
                    printf("Enter amount to deposit: ");
                    scanf("%f", &amount);

                    acc.balance += amount;
                    printf("Amount deposited successfully.\n");
                } else {
                    printf("Please create an account first.\n");
                }
                break;

            case 3:
                if (created) {
                    printf("Enter amount to withdraw: ");
                    scanf("%f", &amount);

                    if (amount <= acc.balance) {
                        acc.balance -= amount;
                        printf("Amount withdrawn successfully.\n");
                    } else {
                        printf("Insufficient balance!\n");
                    }
                } else {
                    printf("Please create an account first.\n");
                }
                break;

            case 4:
                if (created) {
                    printf("Current Balance: %.2f\n", acc.balance);
                } else {
                    printf("Please create an account first.\n");
                }
                break;

            case 5:
                if (created) {
                    printf("\nAccount Details:\n");
                    printf("Account Number: %d\n", acc.accountNo);
                    printf("Account Holder: %s\n", acc.name);
                    printf("Balance: %.2f\n", acc.balance);
                } else {
                    printf("Please create an account first.\n");
                }
                break;

            case 6:
                printf("Thank you for using Bank Account System.\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 6);

    return 0;
}