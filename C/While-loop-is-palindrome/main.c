#include <stdio.h>

int main() {
    int original, number, digit, reversed;

    printf("Enter a number: ");
    scanf("%d", &number);

    original = number;
    while (number != 0) {
        digit = number % 10;
        reversed = reversed * 10 + digit;
        number /= 10;
    }

    if (original == reversed) {
        printf("%d is a palindrome\n", original);
    } else {
        printf("%d is not a palindrome\n", original);
    }

    return 0;
}