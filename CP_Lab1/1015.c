#include<stdio.h>
#include<math.h>

int main()
{
    double x1, x2, y1, y2;
    scanf("%lf %lf %lf %lf\n", &x1, &y1, &x2, &y2);
    double X = (x2 - x1)*(x2 - x1);
    double Y = (y2 - y1)*(y2 - y1);
    double XY = sqrt(X+Y);

    printf("%.4lf\n", XY);

}
