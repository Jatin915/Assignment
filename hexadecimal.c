#include <stdio.h>

void decimalToHexadecimal(int decimal) {
    char hex[20];  // array to store hex digits (enough for large numbers)
    int i = 0;

    while (decimal != 0) {
        int remainder = decimal % 16;

        // Convert remainder to hex digit
        if (remainder < 10) {
            hex[i] = 48 + remainder;  // 48 is ASCII for '0'
        } else {
            hex[i] = 55 + remainder;  // 55 + 10 = 65 ('A')
        }
        i++;
        decimal = decimal / 16;  // divide the number by 16
    }

    printf("Hexadecimal: ");
    for (int j = i - 1; j >= 0; j--) {  // print in reverse order
        printf("%c", hex[j]);
    }
    printf("\n");
}

int main() {
    int decimal;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    if (decimal == 0) {
        printf("Hexadecimal: 0\n");  // Handle zero case
    } else {
        decimalToHexadecimal(decimal);
    }

    return 0;
}