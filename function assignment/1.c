#include<stdio.h>

int fact(int n)
{
    int f = 1;
    for(int  i = 1; i <= n; i++)
    {
        f = f * i;
    }

    return f;
}
int main()
{

    int n;
    scanf("%d", &n);

    printf("%d!=%d",n, fact(n));

    return 0;
}
