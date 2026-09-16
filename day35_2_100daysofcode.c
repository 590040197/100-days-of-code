#include <stdio.h>

int main() {
    int arr[100], temp[100], n, k, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value of k: ");
    scanf("%d", &k);

    k = k % n; // Handle k > n

    for(i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }

    for(i = 0; i < n; i++) {
        arr[i] = temp[i];
    }

    printf("Array after right rotation: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}