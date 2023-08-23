#include<stdio.h>

int main()
{
    int array[5] = {10, 59, 38, 58, 38};
    int sum = 0;

    for( int i = 0; i <5; i++)
    {
        sum+=array[i];

    }

    printf("%d\n", sum);
}
