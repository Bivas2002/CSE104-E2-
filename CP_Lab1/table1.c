#include<stdio.h>

void printMul(int n)
{
    for( int i =1; i < 11; i++)
    {
        printf("%d x %d = %d\n" n, i, n*i);
    }
}

int main()
{
    for(int i = 1; i < 11; i++){
        printMul(10);
        printf("\n");
    }
}
