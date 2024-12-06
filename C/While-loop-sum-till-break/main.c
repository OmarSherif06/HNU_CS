#include <stdio.h>

int main() {
    int sum, number = -1;

    while(number != 0) {
        printf("Enter a number (enter 0 to stop): ");
        scanf("%d", &number);

        sum += number;
    }
    
    printf("%d", sum);

    return 0;
}