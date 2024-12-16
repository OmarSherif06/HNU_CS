#include <stdio.h>

int add(int x, int y) {
    return x + y;
}

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Sum of %d and %d: %d", x, y, add(x, y));

    return 0;
}