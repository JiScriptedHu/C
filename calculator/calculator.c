#include <stdio.h>

float startCalculator();
float calculator();
float continueCalculator(float answer);

int main() {
    char exit;

    float answer = startCalculator();
    
    while (1) {
        printf("Enter 'r' to restart, 'c' to continue, 'e' to exit the calculator: ");
        scanf(" %c", &exit);

        if (exit == 'r') {
            answer = calculator();
        } else if (exit == 'c') {
            answer = continueCalculator(answer);
        } else if (exit == 'e') {
            printf("Exiting calculator...\n");
            return 0;
        }
    }
    
    return 0;
}

float startCalculator() {
    float answer;
    char startf;

    printf("Enter 's' to start or 'e' to exit the calculator: ");
    scanf(" %c", &startf);

    if (startf == 's') {
        answer = calculator();
    } else if (startf == 'e') {
        printf("Exiting calculator...\n");
        return 0;
    } else {
        printf("Invalid input.\n");
        return startCalculator();
    }

    return answer;
}

float calculator() {
    float a, b;
    char optr;

    printf("Enter first operand: ");
    scanf("%f", &a);

    printf("Enter operator (+, -, *, /) : ");
    scanf(" %c", &optr);

    if (optr != '+' && optr != '-' && optr != '*' && optr != '/') {
        printf("Invalid operator.\n");
        return 0.1;
    }

    printf("Enter second operand: ");
    scanf("%f", &b);

    switch (optr) {
        case '+':
            printf("%.2f + %.2f = %.2f\n", a, b, a+b);
            return a+b;
        case '-':
            printf("%.2f - %.2f = %.2f\n", a, b, a-b);
            return a-b;
        case '*':
            printf("%.2f * %.2f = %.2f\n", a, b, a*b);
            return a*b;
        case '/':
            if (b == 0) {
                printf("Division with zero is not possible.\n");
                return 0.1;
            } else {
                printf("%.2f / %.2f = %.2f\n", a, b, a/b);
                return a/b;
            }
    }

    return 0;
}

float continueCalculator(float answer) {
    float b;
    char optr;

    printf("Enter first operand: %.2f\n", answer);
    printf("Enter operator (+, -, *, /) : ");
    scanf(" %c", &optr);

    if (optr != '+' && optr != '-' && optr != '*' && optr != '/') {
        printf("Invalid operation.\n");
        return answer;
    }

    printf("Enter second operand: ");
    scanf("%f", &b);

    switch (optr) {
        case '+':
            printf("%.2f + %.2f = %.2f\n", answer, b, answer+b);
            return answer+b;
        case '-':
            printf("%.2f - %.2f = %.2f\n", answer, b, answer-b);
            return answer-b;
        case '*':
            printf("%.2f * %.2f = %.2f\n", answer, b, answer*b);
            return answer*b;
        case '/':
            if (b == 0) {
                printf("Division with zero is not possible.\n");
                return 0.1;
            } else {
                printf("%.2f / %.2f = %.2f\n", answer, b, answer/b);
                return answer/b;
            }
    }

    return answer;
}