#include<stdio.h>


int main()
{
    int n, i, arr[200];
    scanf("%d", &n);

    for( i = 0; i < n; i++){
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }
    printf("The elements stored in the array are : \n");
    for( i = 0; i < n; i++){
        printf("%5d", arr[i]);
    }
    for( i = 0; i < n; i++)
    if( arr[i] == arr[i]){
        printf("%d", i);
    }
}