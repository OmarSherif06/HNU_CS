#include <stdio.h>

int isPrime(int a) {
    for (int i = 2; i < a; i++) {
        if (a % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int a;

    printf("Enter number: ");
    scanf("%d", &a);

    if (isPrime(a)) {
        printf("%d is prime.", a);
    } else {
        printf("%d is not prime.", a);
    }


    return 0;
}