#include <stdio.h>

int inputPlayerOne();
int inputPlayerTwo();
int checkWinner(char a[9]);

int main() {
    char a[9];
    int x, o;
    int winner;
    int boxOccupied = 0;

    printf("\nLet's play Tic Tac Toe!\n");

    a[0] = 'A', a[1] = 'B', a[2] = 'C', a[3] = 'D', a[4] = 'E', a[5] = 'F', a[6] = 'G', a[7] = 'H', a[8] = 'I';

    printf("\n%c\t%c\t%c\n%c\t%c\t%c\n%c\t%c\t%c\n", a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8]);

    while(1) {
        x = inputPlayerOne();
        a[x] = 'X';
        boxOccupied++;

        printf("\n%c\t%c\t%c\n%c\t%c\t%c\n%c\t%c\t%c\n", a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8]);

        winner = checkWinner(a);

        if (winner == 1) {
            printf("\n\nPlayer1 (x) won!\n");
            return 1;
        } else if (winner == 0) {
            printf("\n\nPlayer2 (o) won!\n");
            return 0;
        }

        if (boxOccupied == 9) {
            printf("\nGame Over! No winner");
            return 0;
        }

        o = inputPlayerTwo();
        a[o] = 'O';
        boxOccupied++;

        printf("\n%c\t%c\t%c\n%c\t%c\t%c\n%c\t%c\t%c\n", a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8]);

        winner = checkWinner(a);

        if (winner == 1) {
            printf("\n\nPlayer1 (x) won!\n");
            return 1;
        } else if (winner == 0) {
            printf("\n\nPlayer2 (o) won!\n");
            return 0;
        }
    }
    
    return 0;
}

int inputPlayerOne() {
    char choiceX;
    printf("\nPlayer1 (x) > Select your box: ");
    scanf(" %c", &choiceX);

    switch (choiceX)
    {
    case 'a':
    case 'A': return 0;
        break;
    case 'b':
    case 'B': return 1;
        break;
    case 'c':
    case 'C': return 2;
        break;
    case 'd':
    case 'D': return 3;
        break;
    case 'e':
    case 'E': return 4;
        break;
    case 'f':
    case 'F': return 5;
        break;
    case 'g':
    case 'G': return 6;
        break;
    case 'h':
    case 'H': return 7;
        break;
    case 'i':
    case 'I': return 8;
        break;
    }
}

int inputPlayerTwo() {
    char choiceO;
    printf("\nPlayer2 (o) > Select your box: ");
    scanf(" %c", &choiceO);

    switch (choiceO)
    {
    case 'a':
    case 'A': return 0;
        break;
    case 'b':
    case 'B': return 1;
        break;
    case 'c':
    case 'C': return 2;
        break;
    case 'd':
    case 'D': return 3;
        break;
    case 'e':
    case 'E': return 4;
        break;
    case 'f':
    case 'F': return 5;
        break;
    case 'g':
    case 'G': return 6;
        break;
    case 'h':
    case 'H': return 7;
        break;
    case 'i':
    case 'I': return 8;
        break;
    }
}

int checkWinner(char a[9]) {

    if (a[0] == a[1] && a[1] == a[2] && a[2] == 'X') {return 1;}
    else if (a[3] == a[4] && a[4] == a[5] && a[5] == 'X') {return 1;}
    else if (a[6] == a[7] && a[7] == a[8] && a[8] == 'X') {return 1;}
    else if (a[0] == a[3] && a[3] == a[6] && a[6] == 'X') {return 1;}
    else if (a[1] == a[4] && a[4] == a[7] && a[7] == 'X') {return 1;}
    else if (a[2] == a[5] && a[5] == a[8] && a[8] == 'X') {return 1;}
    else if (a[0] == a[4] && a[4] == a[8] && a[8] == 'X') {return 1;}
    else if (a[2] == a[4] && a[4] == a[6] && a[6] == 'X') {return 1;}
    else if (a[0] == a[1] && a[1] == a[2] && a[2] == 'O') {return 0;}
    else if (a[3] == a[4] && a[4] == a[5] && a[5] == 'O') {return 0;}
    else if (a[6] == a[7] && a[7] == a[8] && a[8] == 'O') {return 0;}
    else if (a[0] == a[3] && a[3] == a[6] && a[6] == 'O') {return 0;}
    else if (a[0] == a[4] && a[4] == a[7] && a[7] == 'O') {return 0;}
    else if (a[2] == a[5] && a[5] == a[8] && a[8] == 'O') {return 0;}
    else if (a[0] == a[4] && a[4] == a[8] && a[8] == 'O') {return 0;}
    else if (a[2] == a[4] && a[4] == a[6] && a[6] == 'O') {return 0;}

}