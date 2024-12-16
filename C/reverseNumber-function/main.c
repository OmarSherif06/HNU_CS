#include <stdio.h>

int reverseNumber(int number) {
    int digit, reversed;

    while (number != 0) {
        digit = number % 10;
        number /= 10;
        reversed = reversed * 10 + digit;
    }
    return reversed;

}

int main() {
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    printf("Original number: %d\n", number);
    printf("Reversed number: %d\n", reverseNumber(number));

    return 0;
}