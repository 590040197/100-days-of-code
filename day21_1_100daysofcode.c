#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digits;
    int middlePart, result;

    scanf("%d", &num);

    lastDigit = num % 10;

    int temp = num;
    digits = 0;

    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    firstDigit = num / pow(10, digits - 1);

    middlePart = (num % (int)pow(10, digits - 1)) / 10;

    result = lastDigit * pow(10, digits - 1) + middlePart * 10 + firstDigit;

    printf("%d", result);

    return 0;
}