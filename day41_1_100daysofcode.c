#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[count] != '\0') {
        count++;
    }

    // Exclude newline character added by fgets
    if (count > 0 && str[count - 1] == '\n')
        count--;

    printf("Number of characters = %d\n", count);

    return 0;
}