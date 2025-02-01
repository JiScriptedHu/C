#include <stdio.h>
#include <math.h>

int function(int choice);
int BinarytoDecimal(int number);
int DecimaltoBinary(int number);
int DecimaltoOctal(int number);
int OctaltoDecimal(int number);
int DecimaltoHexadecimal(int number);
int HexadecimaltoDecimal(int number);

int main() {
    int choice;

    printf("\nSelect an operation\n\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
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

    switch (choice)
    {
    case 1 :
        printf("Enter Binary number: ");
        scanf("%d", &number);
        printf("Decimal number: %d", BinarytoDecimal(number));
        break;
    case 2 :
        printf("Enter Decimal number: ");
        scanf("%d", &number);
        printf("Binary number: ", DecimaltoBinary(number));
        break;
    case 3 :
        printf("Enter Decimal number: ");
        scanf("%d", &number);
        printf("Octal number: %d", DecimaltoOctal(number));
        break;
    case 4 :
        printf("Enter Octal number: ");
        scanf("%d", &number);
        printf("Decimal number: %d", OctaltoDecimal(number));
        break;
    case 5 :
        printf("Enter Decimal number: ");
        scanf("%d", &number);
        printf("Hexadecimal number: %d", DecimaltoHexadecimal(number));
        break;
    case 6 :
        printf("Enter Hexadecimal number: ");
        scanf("%d", &number);
        printf("Decimal number: %d", HexadecimaltoDecimal(number));
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

int DecimaltoBinary(int number) {

}

int DecimaltoOctal(int number) {

}

int OctaltoDecimal(int number) {

}

int DecimaltoHexadecimal(int number) {

}

int HexadecimaltoDecimal(int number) {
    
}