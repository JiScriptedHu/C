#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int input_guess();
int check_guess(int number, int guess, int attempts);

int main() {
    int number, guess, attempts = 0;

    srand(time(0));
    number = (rand() % 100) + 1;

    printf("Welcome to Guess The Number Game!\n");
    printf("The number is between 1 and 100.\n");

    while (1){
        guess = input_guess();
        attempts++;
        
        if (check_guess(number, guess, attempts) == 1) {
            break;
        }

    }
    
    return 0;
}

int input_guess () {
    int guess;

    printf("Enter your guess: ");
    scanf("%d", &guess);

    return guess;
}

int check_guess(int number, int guess, int attempts) {

    if (guess > number) {
        printf("Wrong guess! Guess a smaller number.\n");
        return 0;
    } else if (guess < number) {
        printf("Wrong guess! Guess a larger number.\n");
        return 0;
    } else {
        printf("Congratulations! You guessed the correct number in %d attempts.\n", attempts);
        return 1;
    }
}