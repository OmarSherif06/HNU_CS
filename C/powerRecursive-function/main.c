#include <stdio.h>

int powerRecursive(int base, int exponent) {

    if (exponent == 0) {
        return 1;
    }

    return base * powerRecursive(base, exponent - 1);
}

int main() {
    int base, exponent;

    printf("Enter two numbers: ");
    scanf("%d %d", &base, &exponent);

    printf("%d^%d = %d", base, exponent, powerRecursive(base, exponent));

    return 0;
}