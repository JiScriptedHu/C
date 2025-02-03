#include <stdio.h>
#include <math.h>
#include <string.h>

int function(int choice);
int BinarytoDecimal(int number);
void DecimaltoBinary(int number);
void DecimaltoOctal(int number);
int OctaltoDecimal(int number);
void DecimaltoHexadecimal(int number);
int HexadecimaltoDecimal(char hex[]);

int main() {
    int choice;

    printf("\nSelect an operation\n\n");
    printf("1. Decimal to Binary\n");
    printf("2. Binary to Decimal\n");
    printf("3. Decimal to Octal\n");
    printf("4. Octal to Decimal\n");
    printf("5. Decimal to Hexadecimal\n");
    printf("6. Hexadecimal to Decimal\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    function(choice);

    return 0;
}

int function(int choice) {
    int number;
    char hex[50];

    switch (choice)
    {
    case 2 :
        printf("Enter Binary number: ");
        scanf("%d", &number);
        printf("Decimal number: %d", BinarytoDecimal(number));
        break;
    case 1 :
        printf("Enter Decimal number: ");
        scanf("%d", &number);
        DecimaltoBinary(number);
        break;
    case 3 :
        printf("Enter Decimal number: ");
        scanf("%d", &number);
        DecimaltoOctal(number);
        break;
    case 4 :
        printf("Enter Octal number: ");
        scanf("%d", &number);
        printf("Decimal number: %d", OctaltoDecimal(number));
        break;
    case 5 :
        printf("Enter Decimal number: ");
        scanf("%d", &number);
        DecimaltoHexadecimal(number);
        break;
    case 6 :
        printf("Enter Hexadecimal number: ");
        scanf("%s", hex);
        printf("Decimal number: %d", HexadecimaltoDecimal(hex));
        break;
    default:
        break;
    }
}

int BinarytoDecimal(int number) {
    int decimal = 0, i = 0, remainder;

    while (number != 0) {
        remainder = number % 10;
        decimal += remainder * pow(2, i);
        number /= 10;
        i++;
    }

    return decimal;
}

void DecimaltoBinary(int number) {
    int binary[32];
    int i = 0;

    if (number == 0) {
        printf("Binary equivalent: 0\n");
        return;
    }

    while (number > 0) {
        binary[i] = number % 2;
        number = number / 2;
        i++;
    }

    printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

void DecimaltoOctal(int number) {
    if (number == 0) {
        printf("Octal equivalent: 0\n");
        return;
    }

    int octal[32];
    int i = 0;

    while (number != 0) {
        octal[i] = number % 8;
        number = number / 8;
        i++;
    }

    printf("Octal equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", octal[j]);
    }
    printf("\n");
}

int OctaltoDecimal(int number) {
    int decimal = 0, i = 0, remainder;

    while (number != 0) {
        remainder = number % 10;
        decimal += remainder * pow(8, i);
        number /= 10;
        i++;
    }

    return decimal;
}

void DecimaltoHexadecimal(int number) {

    if (number == 0) {
        printf("Hexadecimal equivalent: 0\n");
        return;
    }

    int hex[50];
    int i = 0;

    while (number > 0) {
        int remainder = number % 16;

        if (remainder < 10) {
            hex[i] = remainder + '0';
        } else {
            hex[i] = remainder - 10 + 'A';
        }
        i++;

        number = number / 16;
    }

    printf("Hexadecimal equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hex[j]);
    }
    printf("\n");
}

int HexadecimaltoDecimal(char hex[]) {
    int decimal = 0;
    int len = strlen(hex);

    for (int i = 0; i < len; i++) {
        char c = hex[i];
        int value = 0;

        if (c >= '0' && c <= '9') {
            value = c - '0';
        } else if (c >= 'A' && c <= 'F') {
            value = c - 'A' + 10;
        } else if (c >= 'a' && c <= 'f') {
            value = c - 'a' + 10;
        }

        decimal += value * pow(16, len - i - 1);
    }

    return decimal;
}