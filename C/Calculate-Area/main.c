#include <stdio.h>

int main() {
    int length = 0, width = 0, area = 0;
    
    printf("Enter length: ");
    scanf("%d", &length);

    printf("Enter width: ");
    scanf("%d", &width);

    area = length * width;
    printf("The area is: %d", area);

    return 0;
}