#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum += (2 * i - 1);   // Generates odd numbers: 1, 3, 5, ...
    }

    printf("Sum of first %d odd numbers = %d\n", n, sum);

    return 0;
}