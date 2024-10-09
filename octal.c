#include <stdio.h>
#include <string.h>

int main() {
    int num = 0, rem = 0, store = 0, n = 0;
    printf("Enter a number\n");
    scanf("%d", &num);

    n = num;
    while (n >= 8) {
        rem = n % 8;
        if (rem == 0) {
            store = store * 10 + 9;  // Replace 0 with 9
            n /= 8;
        }
        else
        {
        store = store * 10 + rem;
        n /= 8;
        }

        if(n < 8)
        {
            store = store * 10 + n;
        }
    }

    // Convert `store` to a string
    char str[20];
    sprintf(str, "%d", store);

    // Find the length of the string
    int len = strlen(str) - 1;

    // Loop to print characters in reverse order
    for (int i = len; i >= 0; i--) 
    {
        if (str[i] == '9')
        {
            printf("0");
        } 
        else 
        {
            printf("%c", str[i]);  // Prints binary numbers in reverse order
        }
    }

    return 0;
}