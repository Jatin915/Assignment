#include <stdio.h>
#include <string.h>

int main() {
    int num = 0, rem = 0, store = 0, n = 0;
    printf("Enter a number\n");
    scanf("%d", &num);

    n = num;
    while (n != 1) {
        rem = n % 2;

        if (rem == 0) {
            store = store * 10 + 3;  // Replace 0 with 3
            n /= 2;
        } else {
            store = store * 10 + rem;
            n /= 2;
        }
    }

    // Convert `store` to a string
    char str[20];
    sprintf(str, "%d", store);

    // Find the length of the string
    int len = strlen(str) - 1;

    printf("1");
    // Loop to print characters in reverse order
    for (int i = len; i >= 0; i--) {
        if (str[i] == '3') {
            printf("0");
        } else {
            printf("%c", str[i]);  
        }
    }

    return 0;
}