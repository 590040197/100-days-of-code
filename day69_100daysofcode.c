#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int freq[10000] = {0};

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        freq[arr[i]]++;

        if(freq[arr[i]] == 2) {
            printf("%d", arr[i]);
            return 0;
        }
    }

    return 0;
}