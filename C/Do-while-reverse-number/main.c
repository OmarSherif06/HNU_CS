#include <stdio.h>

int main() {
    int number, reversed = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &number);

    do {
        digit = number % 10;
        reversed = reversed * 10 + digit;
        number /= 10;
    } while (number != 0);

    printf("Reversed number: %d", reversed);

    return 0;
}