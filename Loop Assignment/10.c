#include <stdio.h>
//took help to solve this particular one as I was facing problems.
int main() {
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {

        for (int j = i; j > 0; j--) {
            printf("%d ", 1 << (j - 1));
        }

        printf("\n");
    }

}
