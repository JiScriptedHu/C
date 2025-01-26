#include <stdio.h>

int calculator();
void startCalculator();

int main() {
    startCalculator();
    return 0;
}

void startCalculator() {
    char fun;

    printf("Enter 's' to start or 'e' to exit the calculator\n");
    scanf(" %c", &fun);

    if (fun == 's') {
        calculator();
    } else if (fun == 'e') {
        printf("Exiting calculator...\n");
    } else {
        printf("Invalid input.\n");
        startCalculator();
    }
}

int calculator() {
    float a, b;
    char optr;

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter operation: ");
    scanf(" %c", &optr);

    if (optr != '+' && optr != '-' && optr != '*' && optr != '/') {
        printf("Invalid operation.\n");
        return 1;
    }

    printf("Enter second number: ");
    scanf("%f", &b);

    switch (optr)
    {
    case '+':
        printf("%.2f + %.2f = %.2f\n", a, b, a+b);
        break;
    case '-':
        printf("%.2f - %.2f = %.2f\n", a, b, a-b);
        break;
    case '*':
        printf("%.2f * %.2f = %.2f\n", a, b, a*b);
        break;
    case '/':
        if (b == 0) {
            printf("Division with zero is not possible.\n");
            return 1;
        } else {
            printf("%.2f / %.2f = %.2f\n", a, b, a/b);
        }
        break;
    }

    return 0;
}