#include <stdio.h>

#define MAX_OPERATIONS 4

const float TAX_RATE = 0.08;

int main() {
    float num1, num2, result;
    int choice;

    printf("Calculator Menu:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    if (choice < 1 || choice > MAX_OPERATIONS) {
        printf("Invalid choice!\n");
        return 1;
    }

    printf("Enter the 2 numbers: ");
    scanf("%f %f", &num1, &num2);

    if (choice == 4 && num2 == 0) {
        printf("Can't divide by 0\n");
        return 1;
    }

    result = (choice == 1) * (num1 + num2) + (choice == 2) * (num1 - num2) + (choice == 3) * (num1 * num2) + (choice == 4) * (num1 / num2);

    result += result * TAX_RATE;

    printf("The result is: %.2f\n", result);

    return 0;
}