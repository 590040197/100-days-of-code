#include <stdio.h>

int main() {
    char name[100];
    int i;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    // Print first initial
    printf("Initials: %c", name[0]);

    // Print initials after spaces
    for(i = 1; name[i] != '\0'; i++) {
        if(name[i - 1] == ' ' && name[i] != ' ') {
            printf("%c", name[i]);
        }
    }

    return 0;
}