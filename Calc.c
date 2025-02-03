#include <stdio.h>

float add(int num1, int num2);
float subtract(int num1, int num2);
float multiply(int num1, int num2);
float divide(int num1, int num2);

int main() {
    int num1, num2, option;
    float result;

    printf("WELCOME TO SIMPLE CALCULATOR\n");
    printf("----------------------------\n");
    printf("Select an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");

    printf("Enter your option (1-5): ");
    scanf("%d", &option);

    if (option == 5) {
        printf("Exiting the calculator. Goodbye!\n");
        return 0;
    }

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    switch (option) {
        case 1:
            result = add(num1, num2);
            printf("Result: %d + %d = %.2f\n", num1, num2, result);
            break;
        case 2:
            result = subtract(num1, num2);
            printf("Result: %d - %d = %.2f\n", num1, num2, result);
            break;
        case 3:
            result = multiply(num1, num2);
            printf("Result: %d * %d = %.2f\n", num1, num2, result);
            break;
        case 4:
            if (num2 != 0) {
                result = divide(num1, num2);
                printf("Result: %d / %d = %.2f\n", num1, num2, result);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid option! Please select a valid operation.\n");
            break;
    }

    return 0;
}

float add(int num1, int num2) {
    return num1 + num2;
}

float subtract(int num1, int num2) {
    return num1 - num2;
}

float multiply(int num1, int num2) {
    return num1 * num2;
}

float divide(int num1, int num2) {
    return (float)num1 / num2;
}