#include <stdio.h>

int main() {
    long long bin, result = 0, place = 1;
    int digit;

    scanf("%lld", &bin);

    while (bin > 0) {
        digit = bin % 10;

        if (digit == 0)
            result += 1 * place;
        else
            result += 0 * place;

        place *= 10;
        bin /= 10;
    }

    printf("%lld", result);

    return 0;
}