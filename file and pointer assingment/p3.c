#include<stdio.h>

void fact(int n, int *f)
{
    *f = 1;
    for( int i = 1; i <= n; i++){
        *f*= i;
    }
    printf("%d", *f);
}

int main()
{
    int n, f;
    scanf("%d", &n);
    
    fact(n, &f);

}