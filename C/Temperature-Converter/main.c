#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    int choice;

    printf("Temperature Converter\n1. Convert Celsius to Fahrenheit\n2. Convert Fahrenheit to Celsius\n");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9.0 / 5.0) + 32;
        printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
    } else {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5.0 / 9.0;
        printf("Temperature in Celsius: %.2f\n", celsius);
    }

    return 0;
}
