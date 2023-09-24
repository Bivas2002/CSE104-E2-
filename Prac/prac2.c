#include<stdio.h>
/*Write a C program that will take a number as input and find the absolute difference between the input number and 51. 
If the input number is greater than 51, it will return triple the absolute difference.*/

int test(int a)
{
    int x = 51;

    if( a > x){
        return ( a - x)*3;
    }
    else{
        return x - a;
    }
}


int main()
{
    int n;
    scanf("%d", &n);

    printf("%d", test(n));

 
}