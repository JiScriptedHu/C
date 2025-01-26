#include <stdio.h>

int main() {
    float a, b;
    char optr;

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter operation: ");
    scanf(" %c", &optr);

    if (optr != '+' && optr != '-' && optr != '*' && optr != '/') {
        printf("Invalid operation");
        return 0;
    }

    printf("Enter second number: ");
    scanf("%f", &b);

    switch (optr)
    {
    case '+':
        printf("Sum of %.2f and %.2f is %.2f", a, b, a+b);
        break;
    case '-':
        printf("%.2f subtracted from %.2f is %.2f", b, a, a-b);
        break;
    case '*':
        printf("Product of %.2f and %.2f is %.2f", a, b, a*b);
        break;
    case '/':
        if (b == 0) {
            printf("Division with zero is not possible.");
            return 1;
        } else {
            printf("%.2f divided by %.2f is %.2f", a, b, a/b);
        }
        break;
    }

    return 0;
}