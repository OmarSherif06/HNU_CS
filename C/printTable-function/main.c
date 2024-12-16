#include <stdio.h>

void printTable(int x) {
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", x, i, x*i);
    }
}

int main() {
    int x;

    printf("Enter number: ");
    scanf("%d", &x);

    printTable(x);

    return 0;
}