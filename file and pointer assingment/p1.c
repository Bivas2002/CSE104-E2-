#include<stdio.h>

int main()
{
    int a, b;
    int *ptr = &a, *pt = &b;

    scanf("%d %d", &a, &b);

    printf("The multiplication is : %d", *ptr * *pt);


}