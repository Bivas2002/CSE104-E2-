#include<stdio.h>

int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    int array[n];

    for( int i = 0; i < n; i++ ){
        scanf("%d", &array[i]);
    }
    
    int *ptr = array;
    
    for( int i = n - 1; i >= 0; i-- ){
        printf("%d ", ptr[i]);
    }

}