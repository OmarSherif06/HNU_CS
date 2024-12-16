#include <stdio.h>

float average(float a, float b, float c) {
    return (a + b + c) / 3;
}

int main() {
    float a, b ,c;

    printf("Enter three numbers: ");
    scanf("%f %f %f", &a, &b, &c);

    printf("Average of %f, %f, and %f: %f", a, b, c, average(a, b, c));


    return 0;
}