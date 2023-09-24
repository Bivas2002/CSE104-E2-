#include<stdio.h>
/*Write a C program to compute the sum of the two input values. 
If the two values are the same, then return triple their sum.*/

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int sum = a + b;

    if( a != b){
        printf("%d", sum);
    }
    else{
        printf("%d", sum*3);
    }
    return 0;

}