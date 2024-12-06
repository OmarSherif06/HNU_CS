#include <stdio.h>

int main() {
    int number, first = 0, second = 1, next;

    printf("Enter the number of terms in the Fibonacci Series: ");
    scanf("%d", &number);

    printf("Fibonacci Series up to %d terms\n", number);
    for (int i = 1; i <= number; i++) {
        if (i == 1) {
            printf("%d, ", first);
            continue;
        }
        if (i == 2) {
            printf("%d, ", second);
            continue;
        }
        next = first + second;
        
        printf("%d, ", next);
        
        first = second;
        second = next;
    }


    return 0;
}