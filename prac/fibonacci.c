#include<stdio.h>

int getfibonacci(int n)
{
    //0 + 1 + 1 + 2 + 3 + 5 + 8

    if( n <= 1)
    {
        return n;
    }
    else
    {
        return getfibonacci(n - 1) + getfibonacci(n - 2);
    }
}


int main()
{
    int n;
    scanf("%d", &n);
    printf("%d ",getfibonacci(n));
}
