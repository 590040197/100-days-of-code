#include <stdio.h>
#include <limits.h>

int main() {
    int arr[100], n, i;
    int largest = INT_MIN, secondLargest = INT_MIN;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if(secondLargest == INT_MIN)
        printf("No second largest element exists.");
    else
        printf("Second largest element = %d", secondLargest);

    return 0;
}