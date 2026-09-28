#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    char *word;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    // Remove newline character
    name[strcspn(name, "\n")] = '\0';

    char *parts[20];
    int count = 0;

    word = strtok(name, " ");
    while (word != NULL) {
        parts[count++] = word;
        word = strtok(NULL, " ");
    }

    // Print initials of all names except surname
    for (int i = 0; i < count - 1; i++) {
        printf("%c. ", parts[i][0]);
    }

    // Print surname in full
    printf("%s\n", parts[count - 1]);

    return 0;
}