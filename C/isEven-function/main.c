#include <stdio.h>

int isEven(int number) {
    return number % 2 == 0;    
}

int main() {
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    if (isEven(number)) {
        printf("%d Even", number);
    } else {
        printf("%d Odd", number);
    }

    return 0;
}