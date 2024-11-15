#include <stdio.h>

int main() {
    printf("Welcome to the Food Ordering System!\n");
    printf("Menu:\n");
    printf("1. Poundo Yam/Edikaiko Soup - N3200\n");
    printf("2. Fried Rice & Chicken      - N3000\n");
    printf("3. Amala & Ewedu Soup        - N2500\n");
    printf("4. Eba & Egusi Soup          - N2000\n");
    printf("5. White Rice & Stew         - N2500\n");
    printf("6. Exit\n");

    int choice, quantity;
    double total = 0.0;
    double itemTotal = 0.0;

    do {
        printf("Enter the number corresponding to your food choice (or 6 to finish): ");
        scanf("%d", &choice);

        if (choice == 6) {
            break;
        }

        printf("Enter the quantity (maximum 100): ");
        scanf("%d", &quantity);

        // Validate quantity
        while (quantity < 1 || quantity > 100) {
            printf("Invalid quantity. Please enter a value between 1 and 100: ");
            scanf("%d", &quantity);
        }

        switch (choice) {
            case 1:
                itemTotal = quantity * 3200;
                printf("You ordered %d Poundo Yam/Edikaiko Soup. Subtotal: N%.2f\n", quantity, itemTotal);
                total += itemTotal;
                break;

            case 2:
                itemTotal = quantity * 3000;
                printf("You ordered %d Fried Rice & Chicken. Subtotal: N%.2f\n", quantity, itemTotal);
                total += itemTotal;
                break;

            case 3:
                itemTotal = quantity * 2500;
                printf("You ordered %d Amala & Ewedu Soup. Subtotal: N%.2f\n", quantity, itemTotal);
                total += itemTotal;
                break;

            case 4:
                itemTotal = quantity * 2000;
                printf("You ordered %d Eba & Egusi Soup. Subtotal: N%.2f\n", quantity, itemTotal);
                total += itemTotal;
                break;

            case 5:
                itemTotal = quantity * 2500;
                printf("You ordered %d White Rice & Stew. Subtotal: N%.2f\n", quantity, itemTotal);
                total += itemTotal;
                break;

            default:
                printf("Invalid choice. Please select a valid menu item.\n");
                break;
        }
    } while (1);

    printf("Your total bill is: N%.2f\n", total);
    printf("Thank you for your order!\n");

    return 0;
}
