#include<stdio.h>

int test(int a, int b)
{
    if( a == 30 || b == 30 || a + b == 30){
        return 1;
    }
    else{
        return 0;
    }
}


int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d", test(a, b));
}