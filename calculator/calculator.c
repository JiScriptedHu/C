#include <stdio.h>

int main() {
    int a, b;
    char optr;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter operation: ");
    scanf(" %c", &optr);

    if (optr != '+' && optr != '-' && optr != '*' && optr != '/') {
        printf("Invalid operation");
        return 0;
    }

    printf("Enter second number: ");
    scanf("%d", &b);

    switch (optr)
    {
    case '+':
        printf("Sum of %d and %d is %d", a, b, a+b);
        break;
    case '-':
        printf("%d subtracted from %d is %d", b, a, a-b);
        break;
    case '*':
        printf("Product of %d and %d is %d", a, b, a*b);
        break;
    case '/':
        printf("%d divided by %d is %d", a, b, a/b);
        break;
    }

    return 0;
}