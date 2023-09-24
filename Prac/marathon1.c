#include<stdio.h>
#include<math.h>

int main()
{
    int t;
    double r;
    scanf("%d", &t);

    for( int i = 1; i <= t; i++){
        scanf("%lf", &r);
         
        double pi = 2 * acos (0.0);
        double Area = 4 * r * r;
        double circle = pi*r*r;
        
        double res = Area - circle;
        printf("Case %d: %.2lf\n", i, res);
    }

}