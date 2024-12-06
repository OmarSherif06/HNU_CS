#include <stdio.h>

int main() {
    int number, original, digit, sum;

    printf("Enter an integer: ");
    scanf("%d", &number);

    original = number;

    while (number != 0) {
        digit = number % 10;
        number /= 10;
        sum += digit;
    }

    printf("The sum of digits of %d is: %d", original, sum);

    return 0;
}