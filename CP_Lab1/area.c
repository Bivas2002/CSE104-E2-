#include<stdio.h>

float getArea(float r)
{
    return 3.1416*r*r;
}


int main()
{
    float r;
    scanf("%f", &r);

    printf("Area = %.2f", getArea(r));
}
