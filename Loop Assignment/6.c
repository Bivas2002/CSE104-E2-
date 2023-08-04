#include <stdio.h>

int main()
{
    int N, year = 200;
    scanf("%d", &N);
    while (year <= N)
    {
        printf("%d\n", year);
        year += 200;
    }

    if (year - 200 > N)
    {
        printf("Has not been observed yet\n");
    }

}
