#include<stdio.h>

int main()
{
    char name[100];
    scanf("%s", &name);
    double x, y;
    scanf("%lf %lf", &x, &y);

    double total = x + (y*0.15);

    printf("TOTAL = R$ %.2lf\n", total);

}
