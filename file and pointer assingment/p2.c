#include<stdio.h>

int main()
{
    int a, b;
    int *ptr = &a, *pt = &b;

    scanf("%d %d", &a, &b);

    if( *ptr > *pt ){
        printf("%d", *ptr);
    }
    else{
        printf("%d", *pt);
    }

}