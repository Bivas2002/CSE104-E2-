#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int Cans = ( a + b) - 1;

    int Harry = Cans - a;
    int Larry = Cans - b;

    printf("%d %d\n", Harry, Larry);

    return 0;
}
