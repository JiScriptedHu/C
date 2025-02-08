#include <stdio.h>
#include <string.h>

struct account {
    char fullName[50];
    int age;
    long long contactNo;
    long long accountNo;
};

struct account accounts[100];
int accountCount = 0;

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
            printf("Exited\n");
            break;
        } else {
            printf("Invalid input! Please try again.\n");
        }
    }

    return 0;
}

void createAccount() {
    if (accountCount >= 100) {
        printf("Account limit reached.\n");
        return;
    }

    struct account newAccount;
    
    printf("Enter Full Name: ");
    scanf(" %[^\n]%*c", newAccount.fullName);
    printf("Enter Age: ");
    scanf("%d", &newAccount.age);
    printf("Enter Contact Number: ");
    scanf("%lld", &newAccount.contactNo);

    newAccount.accountNo = 2512010000LL + accountCount;

    accounts[accountCount] = newAccount;
    accountCount++;

    printf("Account created successfully. Account No: %lld\n", newAccount.accountNo);
}

void searchAccount() {
    long long searchAccNo, found = 0;
    printf("Enter Account Number to search: ");
    scanf("%lld", &searchAccNo);


    for (int i = 0; i < accountCount; i++) {
        if (accounts[i].accountNo == searchAccNo) {
            printf("\nAccount Found!\n");
            printf("Full Name: %s\n", accounts[i].fullName);
            printf("Age: %d\n", accounts[i].age);
            printf("Contact No: %lld\n", accounts[i].contactNo);
            printf("Account No: %lld\n", accounts[i].accountNo);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Account not found.\n");
    }
}