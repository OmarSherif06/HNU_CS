#include <stdio.h>

int sumOfSquares(int a, int b) {
    return a*a + b*b;
}

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Sum of squares of %d and %d: %d", a, b, sumOfSquares(a, b));

    return 0;
}