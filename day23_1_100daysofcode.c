#include <stdio.h>

int main() {
    int n;
    int numerator = 2, denominator = 3;
    float sum = 0.0;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += (float)numerator / denominator;

        numerator += 2;
        denominator += 4;
    }

    printf("%.2f", sum);

    return 0;
}