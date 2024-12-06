#include <stdio.h>

int main() {
    float num1, num2;
    int choice = -1;

    while (choice != 0) {
        printf("Menu:\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n0. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter two numbers to add: ");
                scanf("%f %f", &num1, &num2);
                printf("Result: %f\n", num1+num2);
                break;
            case 2:
                printf("Enter two numbers to subtract: ");
                scanf("%f %f", &num1, &num2);
                printf("Result: %f\n", num1-num2);
                break;
            case 3:
                printf("Enter two numbers to multiply: ");
                scanf("%f %f", &num1, &num2);
                printf("Result: %f\n", num1*num2);
                break;
            case 4:
                printf("Enter two numbers to add: ");
                scanf("%f %f", &num1, &num2);
                if (num2 != 0) {
                    printf("Result: %f\n", num1/num2);
                } else {
                    printf("Cannot divide by 0!\n");
                }
                break;
        }
    }

    return 0;
}