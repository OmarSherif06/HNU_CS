#include <stdio.h>

int factorial(int number) {
    int product = 1;
    
    for (int i = 1; i <= number; i++) {
        product *= i;
    }

    return product;
}

int main() {
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    printf("Factorial of %d: %d", number, factorial(number));

    return 0;
}