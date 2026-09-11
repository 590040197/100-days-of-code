#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // Display before swapping
    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

    // Swap without using a third variable
    a = a + b;  // Step 1
    b = a - b;  // Step 2
    a = a - b;  // Step 3

    // Display after swapping
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
