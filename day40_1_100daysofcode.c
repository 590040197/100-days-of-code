#include <stdio.h>

int main() {
    int n, m;

    printf("Enter rows and columns: ");
    scanf("%d %d", &n, &m);

    int a[n][m];

    printf("Enter matrix elements:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Diagonal Traversal:\n");

    for(int k = 0; k < n + m - 1; k++) {
        int i = (k < m) ? 0 : k - m + 1;
        int j = (k < m) ? k : m - 1;

        while(i < n && j >= 0) {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    return 0;
}