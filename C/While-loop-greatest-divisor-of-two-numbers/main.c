#include <stdio.h>

int main() {
    int num1, num2, limit, gcd = 1;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    int i = 1;
    limit = (num1 > num2) ? num1 : num2;
    while (i <= limit) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
        i++;
    }

    printf("The Greatest Common Divisor (GCD) is: %d", gcd);

    return 0;
}