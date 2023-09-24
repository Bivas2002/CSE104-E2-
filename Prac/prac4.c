#include<stdio.h>
/*Write a program in C to read n number of values in an array 
and display them in reverse order*/

int main()
{
    int n, i, array[100];
    scanf("%d", &n);

    for( i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }
        for( i = 0; i < n; i++){
            printf("%d ", array[i]);
        }
    printf("\n");
    for( i = n-1; i >= 0; i--){
        printf("%d ", array[i]);
    }

}