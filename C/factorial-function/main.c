#include <stdio.h>

int factorial(int number) {
    int product = 1;
    
    for (int i = 1; i <= number; i++) {
        product *= i;
    }

    return product;
}

int recursiveFactorial(int number) {
    if (number <= 0) return 1;

    return number * recursiveFactorial(number - 1);
}

int main() {
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    printf("Factorial of %d: %d", number, recursiveFactorial(number));

    return 0;
}