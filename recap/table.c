#include<stdio.h>

void PrintTable(int n)
{
    for(int i = n; i <= n; i++){
        for( int j = 1; j <= 10; j++){
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }

}

int main()
{
    int n;
    scanf("%d", &n);

    PrintTable(n);

}
