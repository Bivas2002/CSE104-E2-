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
    
    for( int i = 0; i < n; i++ ){
        sum+=ptr[i];
    }

    printf("%d", sum);

}