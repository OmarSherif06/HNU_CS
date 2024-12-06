#include <stdio.h>

int main() {
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    for (int i = 0; i < number - 1; i++) {
        for (int j = 0; j < number; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}