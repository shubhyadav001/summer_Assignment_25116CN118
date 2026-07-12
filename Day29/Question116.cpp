//Write a program to Create inventory management system.
#include <stdio.h>

struct Product {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    struct Product products[100];
    int n = 0, choice, searchId, i, found, qty;

    do {
        printf("\n===== Inventory Management System =====\n");
        printf("1. Add Product\n");
        printf("2. Display Products\n");
        printf("3. Search Product\n");
        printf("4. Update Stock\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("\nEnter Product ID: ");
                scanf("%d", &products[n].id);

                printf("Enter Product Name: ");
                scanf("%s", products[n].name);

                printf("Enter Quantity: ");
                scanf("%d", &products[n].quantity);

                printf("Enter Price: ");
                scanf("%f", &products[n].price);

                n++;

                printf("Product added successfully!\n");
                break;

            case 2:
                if (n == 0) {
                    printf("Inventory is empty.\n");
                }
                else {
                    printf("\n===== Product List =====\n");

                    for (i = 0; i < n; i++) {
                        printf("\nProduct ID: %d", products[i].id);
                        printf("\nName: %s", products[i].name);
                        printf("\nQuantity: %d", products[i].quantity);
                        printf("\nPrice: %.2f\n", products[i].price);
                    }
                }
                break;

            case 3:
                printf("\nEnter Product ID to search: ");
                scanf("%d", &searchId);

                found = 0;

                for (i = 0; i < n; i++) {
                    if (products[i].id == searchId) {
                        printf("\nProduct Found:");
                        printf("\nID: %d", products[i].id);
                        printf("\nName: %s", products[i].name);
                        printf("\nQuantity: %d", products[i].quantity);
                        printf("\nPrice: %.2f\n", products[i].price);
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Product not found.\n");

                break;

            case 4:
                printf("\nEnter Product ID to update stock: ");
                scanf("%d", &searchId);

                found = 0;

                for (i = 0; i < n; i++) {
                    if (products[i].id == searchId) {
                        printf("Enter new quantity: ");
                        scanf("%d", &qty);

                        products[i].quantity = qty;

                        printf("Stock updated successfully.\n");
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Product not found.\n");

                break;

            case 5:
                printf("Exiting Inventory Management System...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 5);

    return 0;
}