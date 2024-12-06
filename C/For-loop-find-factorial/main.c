#include <stdio.h>

int main() {
    int factorial = 1, number;
    
    printf("Enter a number: ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++) {
        factorial *= i;
    }

    printf("Factorial: %d\n", factorial);


    return 0;
}