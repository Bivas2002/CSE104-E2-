#include<stdio.h>

int main()
{
    int array[] = { 10, 15, 25, 26, 12, 30};

    int max = array[0], min = array[0];

    for( int i = 0; i < 6; i++)
    {
        if( max < array[i])
        {
            max = array[i];
        }
    }
    printf("Max = %d\n", max);


    for( int i = 0; i < 6; i++)
    {
        if( min > array[i])
        {
            min = array[i];
        }
    }
    printf("Min = %d\n", min);



}
