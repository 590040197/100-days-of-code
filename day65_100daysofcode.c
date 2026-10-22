#include <stdio.h>
#include <string.h>

int main() {
    char s[1000], t[1000];

    scanf("%s", s);
    scanf("%s", t);

    int freq[26] = {0};

    for (int i = 0; s[i] != '\0'; i++) {
        freq[s[i] - 'a']++;
    }

    for (int i = 0; t[i] != '\0'; i++) {
        freq[t[i] - 'a']--;
    }

    int isAnagram = 1;

    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram) {
        printf("Anagram");
    } else {
        printf("Not Anagram");
    }

    return 0;
}