#include<stdio.h>

int main()
{
    int x, N, i=1;
    scanf("%d", &x);
    scanf("%d", &N);

    do
    {
        printf(" %d No. Multiplier of %d : %d\n",i, x, x * i);
        i++;
    }
    while (x * i <= N);

    printf("\n");

}
