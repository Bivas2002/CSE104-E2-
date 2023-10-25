#include<stdio.h>

void printNumbers(int a, int b)
{
    if( a < b)
    {
        return;
    }
    printf("%d ", a);
    printNumbers(a - 1, b);
}

int main()
{
    int a = 10, b = 1;
    printNumbers(a, b);
}
