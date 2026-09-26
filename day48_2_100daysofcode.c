#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int start = 0, end, i;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; ; i++) {
        if (str[i] == ' ' || str[i] == '\0' || str[i] == '\n') {
            end = i - 1;

            while (end >= start) {
                printf("%c", str[end]);
                end--;
            }

            if (str[i] == ' ')
                printf(" ");
            else
                break;

            start = i + 1;
        }
    }

    return 0;
}