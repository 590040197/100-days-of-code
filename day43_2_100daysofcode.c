#include <stdio.h>

int main() {
    char str[100];
    int len = 0, palindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    // Find length of string
    while (str[len] != '\0') {
        len++;
    }

    // Compare characters from both ends
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            palindrome = 0;
            break;
        }
    }

    if (palindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}