#include <stdio.h>

void printPatternWithSize(int x, int y) {
    printf("Printing Pattern with Size %d by %d:\n", x, y);
    for (int i = 1; i <= x; i++) {
        for (int j = 1; j <= y; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printPatternWithSize(x, y);

    return 0;
}