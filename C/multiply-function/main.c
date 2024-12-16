#include <stdio.h>

float multiply(float x, float y, float z) {
    return x * y * z;
}

int main() {
    float x, y ,z;

    printf("Enter three numbers: ");
    scanf("%f %f %f", &x, &y, &z);

    printf("Product of %f, %f, and %f of : %f", x, y, z, multiply(x, y, z));


    return 0;
}