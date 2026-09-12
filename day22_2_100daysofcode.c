#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;
    int num = 1, den = 2;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        if(i == 1)
            sum += 1;
        else {
            num += 2;
            den += 2;
            sum += (float)num / den;
        }
    }

    printf("%.2f", sum);

    return 0;
}