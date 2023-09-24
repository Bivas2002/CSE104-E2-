#include <stdio.h>

int main() {
    int n, a, b, sum = 0;
    scanf("%d", &n);

    int d[n - 1];
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &d[i]);
    }

    scanf("%d %d", &a, &b);


    for (int i = a - 1; i < b - 1; i++) {
        sum += d[i];
    }

    printf("%d\n", sum);

    return 0;
}
