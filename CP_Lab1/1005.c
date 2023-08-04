#include<stdio.h>

int main()
{
    float A = 3.5, B = 7.5;
    float a, b;
    scanf("%f %f", &a, &b);

    float avg =(A*a + B*b)/(A+B);

    printf("MEDIA = %.5f\n", avg);

}
