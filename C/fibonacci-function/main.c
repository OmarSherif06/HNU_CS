#include <stdio.h>

void fibonacci(int n) {
    int first = 0, second = 1, next;

    printf("%d %d ", first, second);

    for (int i = 1; i <= n; i++) {
        next = first + second;
        
        printf("%d ", next);

        first = second;
        second = next;
    }

}

void recursiveFibonacci(int n) {
    static int first = 0, second = 1, next;

    if (n <= 0) {
        return;
    }

    next = first + second;
    printf("%d ", next);
    first = second;
    second = next;

    recursiveFibonacci(n - 1);

}

int main() {
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    recursiveFibonacci(n);

    return 0;
}