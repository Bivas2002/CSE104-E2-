#include<stdio.h>

int main()
{
    double R;
    scanf("%lf", &R);
    double pi = 3.14159;
    double sphere = ((4.0/3)*pi*R*R*R);

    printf("VOLUME = %.3f\n", sphere);

}
