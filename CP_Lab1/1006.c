#include<stdio.h>

int main()
{
    double A = 2, B = 3, C =5;
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    double avg =(A*a + B*b + C*c)/(A+B+C);

    printf("MEDIA = %.1lf\n", avg);

}
