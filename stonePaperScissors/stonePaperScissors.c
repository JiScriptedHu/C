#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char userInput();
char systemInput();
int resultCheck(char systemChoice, char userChoice);
int exitMenu();

int main() {
    char systemChoice, userChoice;
    int result;
    char playAgain;

    do
    {
        printf("\nLet's play Stone Paper Scissors!\n");
        printf("'r' = stone\t'p' = paper\t's' = scissors\n\n");

        systemChoice = systemInput();
        userChoice = userInput();
        result = resultCheck(systemChoice, userChoice);

        if (result == 0) {
            printf("It's a Tie.");
        } else if (result == 1) {
            printf("You Won!");
        } else if (result == -1) {
            printf("You Lose!");
        }

        playAgain = exitMenu();

    } while (playAgain == 1);
    
    printf("Exiting the game...");

    return 0;
}

char systemInput() {
    int choice;

    srand(time(0));
    choice = rand() % 3 + 1;

    if (choice == 1) {
        return 'r';
    } else if (choice == 2) {
        return 'p';
    } else {
        return 's';
    }
}

char userInput() {
    char userChoice;

    while (1) {
        printf("Enter your choice: ");
        if (scanf(" %c", &userChoice) == 1) {
            if (userChoice == 'r' || userChoice == 'p' || userChoice == 's') {
                return userChoice;
            } else {
                printf("Invalid input. Please enter 'r', 'p', or 's'.\n");
            }
        } else {
            printf("Invalid input. Please enter 'r', 'p', or 's'.\n");
            while (getchar() != '\n');
        }
    }
}

int resultCheck(char systemChoice, char userChoice) {
    if (systemChoice == userChoice) {
        return 0;
    } else if (systemChoice == 'r' && userChoice == 'p' || systemChoice == 'p' && userChoice == 's' || systemChoice == 's' && userChoice == 'r') {
        return 1;
    } else if (systemChoice == 'p' && userChoice == 'r' || systemChoice == 'r' && userChoice == 's' || systemChoice == 's' && userChoice == 'p') {
        return -1;
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