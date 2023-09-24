#include<stdio.h>
#include<math.h>

int main()
{
    int L, M;
    scanf("%d", &L ,&M);

    int res = (L % 2019 * M % 2019) % 2019;

    printf("%d", res); 



}