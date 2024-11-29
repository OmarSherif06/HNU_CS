#include <stdio.h>

int main() {
    int num1, num2, choice, result;

    printf("Select an operation to perform:\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Modulo (%%)\n");

    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    if (choice == 1) {
        result = num1 + num2;
        printf("Result: %d + %d = %d\n", num1, num2, result);
    } else if (choice == 2) {
        result = num1 - num2;
        printf("Result: %d - %d = %d\n", num1, num2, result);
    } else if (choice == 3) {
        result = num1 * num2;
        printf("Result: %d * %d = %d\n", num1, num2, result);
    } else if (choice == 4) {
        if (num2 != 0) {
            result = num1 / num2;
            printf("Result: %d / %d = %d\n", num1, num2, result);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    } else if (choice == 5) {
        if (num2 != 0) {
            result = num1 % num2;
            printf("Result: %d %% %d = %d\n", num1, num2, result);
        } else {
            printf("Error: Modulo by zero is not allowed.\n");
        }
    } else {
        printf("Error: Invalid choice.\n");
    }

    return 0;
}
