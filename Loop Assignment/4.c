#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    double sum = 0.0;
    for (int i = 1; i <= N; i++)
    {
        printf("1/%d", i);

        if (i < N)
        {
            printf("+");
        }

    }

}
