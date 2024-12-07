#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int random, guess = -1, attempts = 0; 
    
    srand(time(NULL));
    random = rand() % 100 + 1;

    printf("Welcome to the Guessing Game!\n");
    while (guess != random) {
        printf("Enter your guess (between 1 and 100): ");
        scanf("%d", &guess);
        attempts++;

        if (guess > random) {
            printf("Too high. Try again.\n");
        } else if (guess < random) {
            printf("Too low. Try again.\n");
        }
    }
    
    printf("Congratulations! You guessed the correct number (%d) in %d attempts.", random, attempts);

    return 0;
}