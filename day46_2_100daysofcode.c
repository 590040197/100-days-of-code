#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0};

    printf("Enter a string: ");
    scanf("%s", str);

    for(int i = 0; str[i] != '\0'; i++) {
        int index = str[i] - 'a';

        if(freq[index] == 1) {
            printf("First repeating lowercase alphabet: %c\n", str[i]);
            return 0;
        }

        freq[index]++;
    }

    printf("No repeating lowercase alphabet found.\n");

    return 0;
}