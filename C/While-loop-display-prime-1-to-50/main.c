#include <stdio.h>

int main() {
    int num = 2, isPrime;

    while(num <= 50) {
        isPrime = 1;

        int i = 2;
        while (i <= num / 2) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
            i++;
        }

        if (isPrime) {
            printf("%d\n", num);
        }
        num++;
    }

    return 0;
}