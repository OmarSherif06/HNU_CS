#include <stdio.h>

int main() {
    int number = 0, count;
    float average;
    do {
        printf("Enter positive numbers (enter a negative number to stop): ");
        scanf("%d", &number);

        if (number >= 0) {
            average += number;
            count++;
        }
    } while (number >= 0);

    printf("Average: %f", average / count);
}