#include <stdio.h>

int power(int base, int exponent) {
    int product = 1;
    for (int i = 0; i < exponent; i ++) {
        product *= base;
    }
    return product;
}

int main() {
    int base, exponent;

    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exponent);

    printf("%d^%d = %d", base, exponent, power(base, exponent));

    return 0;
}