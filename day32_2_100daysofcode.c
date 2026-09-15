#include <stdio.h>

int main() {
    long long num;
    int freq[10] = {0};

    printf("Enter a number: ");
    scanf("%lld", &num);

    if (num < 0)
        num = -num;  // Handle negative numbers

    // Count frequency of each digit
    while (num > 0) {
        int digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    // Find digit with maximum frequency
    int maxDigit = 0;
    for (int i = 1; i < 10; i++) {
        if (freq[i] > freq[maxDigit]) {
            maxDigit = i;
        }
    }

    printf("Digit occurring most times: %d\n", maxDigit);
    printf("Frequency: %d\n", freq[maxDigit]);

    return 0;
}