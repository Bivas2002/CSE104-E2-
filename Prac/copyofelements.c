#include<stdio.h>
//Write a program in C to copy the elements of one array into another array.

int main()
{
    int n, i, arr[200], copy[200];
    scanf("%d", &n);

    for( i = 0; i < n; i++){
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }
    printf("The elements stored in the first array are : \n");
    for( i = 0; i < n; i++){
        printf("%5d", arr[i]);
    }

    printf("\n");

    for( i = 0 ; i < n; i++ ){
        copy[i] = arr[i];
    }
    printf("The elements stored in the second array are : \n");
    for( i = 0; i < n; i++){
    printf("%5d", copy[i]);
    }


}