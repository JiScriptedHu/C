#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 1;

    srand(time(0));
    number = (rand() % 100) + 1;

    printf("Welcome to Guess The Number Game\n");

    while (1){
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > number) {
            printf("Wrong guess! Guess a smaller number.\n");
        } else if (guess < number) {
            printf("Wrong guess! Guess a larger number.\n");
        } else {
            printf("Congratulations! You guessed the correct number in %d attempts.\n", attempts);
            break;
        }
    }
    
    return 0;
}