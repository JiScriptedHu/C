#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num, count = 1;
    int i;

    srand(time(0));
    num = (rand() % 100) + 1;

    printf("Guess The Number Game\n");
    printf("Welcome\n");

    while (1){
        printf("Enter your guess: ");
        scanf("%d", &i);

        if (i > num) {
            printf("Wrong guess.\n");
            printf("Guess a smaller number.\n");
            count++;
        } else if (i < num) {
            printf("Wrong guess!\n");
            printf("Guess a larger number.\n");
            count++;
        } else {
            printf("Congratulations! You guessed the correct number.\n");
            printf("Total guesses: %d\n", count);
            break;
        }
    }
    
    return 0;
}