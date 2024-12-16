#include <stdio.h>

float calculateArea(float radius) {
    return 3.14*  radius * radius;
}

int main() {
    float radius;

    printf("Enter radius: ");
    scanf("%f", &radius);

    printf("Area of the circle with radius %f is: %f", radius, calculateArea(radius));

    return 0;
}