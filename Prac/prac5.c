#include<stdio.h>

//sum of the elements within the elements

int main()
{
    int n, i, arr[200], sum = 0;
    scanf("%d", &n);

    for( i = 0; i < n; i++){
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }
        for( i = 0; i < n; i++){
            sum+= arr[i];
        }
            printf("Sum of all elements stored in the array is : %d", sum);


}