#include <stdio.h>
#include <string.h>

void createAccount();
void searchAccount();

int main() {
    int menuInput;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Create new account\n");
        printf("2. Search account\n");
        printf("3. Close menu and exit\n");
        printf("Input: ");
        scanf("%d", &menuInput);

        if (menuInput == 1) {
            createAccount();
        } else if (menuInput == 2) {
            searchAccount();
        } else if (menuInput == 3) {
            printf("Exited");
            return 0;
        } else {
            printf("Invalid input! Please try again.\n");
        }
    }
    

    return 0;
}

void createAccount() {
}

void searchAccount() {
}