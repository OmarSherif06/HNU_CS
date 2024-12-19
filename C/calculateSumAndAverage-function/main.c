#include <stdio.h>

void calculateSumAndAverage(int *a, int *b, int *sum, float *average) {
    *sum = *a + *b;
    *average = (*a + *b) / 2.0;
}

int main() {
    int a, b, sum;
    float average;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    calculateSumAndAverage(&a, &b, &sum, &average);

    printf("The Sum of %d and %d: %d\n", a, b, sum);
    printf("The Average of %d and %d: %.2f\n", a, b, average);

    return 0;
}