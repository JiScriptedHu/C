#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int input_guess();
int check_guess(int number, int guess, int attempts);
int exitMenu();

int main() {
    int number, guess, attempts = 0;
    char playAgain;

    do
    {
        srand(time(0));
        number = (rand() % 100) + 1;

        printf("\nWelcome to Guess The Number Game!\n");
        printf("The number is between 1 and 100.\n");

        while (1){
            guess = input_guess();
            attempts++;
            
            if (check_guess(number, guess, attempts) == 1) {
                break;
            }

        }

        attempts = 0;
        playAgain = exitMenu();

    } while (playAgain == 1);

    printf("Exiting the game...");
    
    return 0;
}

int input_guess () {
    int guess;

    printf("Enter your guess: ");
    while (1){
        if (scanf("%d", &guess) == 1) {
            return guess;
        } else {
            printf("Invalid input. Please enter a number!\n");
            printf("Enter your guess: ");
            while (getchar() != '\n');
        }
    }
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

int exitMenu() {
    char exitChoice;
    
    while (1) {
        printf("\nDo you want to play again? (y/n): ");
        if (scanf(" %c", &exitChoice) == 1) {
            if (exitChoice == 'y' || exitChoice == 'Y') {
                return 1;
            } else if (exitChoice == 'n' || exitChoice == 'N') {
                return 0;
            } else {
                printf("\nInvalid input.");
            }
        } else {
            printf("\nInvalid input.");
            while (getchar() != '\n');
        }
    }
}