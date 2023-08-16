#include<stdio.h>

float getArea(float r)
{
    return 3.1416*r*r;
}

float getVolume(float r)
{
    float volume = (4.0/3.0)*r*getArea(r);
    return volume;
}

int main()
{
    float r;
    scanf("%f", &r);
    printf("%.2f", getVolume(r));
}
