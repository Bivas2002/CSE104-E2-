#include<stdio.h>

void printEven( int n)
{

    for( int i = 1; i<= n; i++)
    {
        printf("%d", i*2);
        if( i < n)
        {
            printf(", ");
        }
    }

}
int main()
{
    int n;
    scanf("%d", &n);
    printf("Even Numbers: ");
    printEven(n);

}
