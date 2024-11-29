#include <stdio.h>

int main() {
    int mark;

    printf("Enter the mark (0 to 100): ");
    scanf("%d", &mark);

    if (mark < 0 || mark > 100) {
        printf("Error: Invalid mark. Please enter a number between 0 and 100.\n");
    } else {
        switch (mark) {
            case 85 ... 100:
                printf("Grade: Excellent\n");
                break;
            case 75 ... 84:
                printf("Grade: Very Good\n");
                break;
            case 65 ... 74:
                printf("Grade: Good\n");
                break;
            case 50 ... 64:
                printf("Grade: Pass\n");
                break;
            case 0 ... 49:
                printf("Grade: Fail\n");
                break;
            default:
                printf("Error: Invalid input.\n");
                break;
        }
    }

    return 0;
}
