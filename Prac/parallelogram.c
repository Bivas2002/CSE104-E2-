#include<stdio.h>
#include<math.h>

int main()
{
    int x1, y1, x2, y2, x3, y3, t, length1, length2;
    scanf("%d", &t);

    for( int i = 1; i <= t; i++)
    {
        scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);

        int x4 = x1 + x3 - x2;
        int y4 = y1 + y3 - y2;
        length1 = (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1);
        length2 = (x4 - x1)*(x4 - x1)+ (y4 - y1)*(y4 - y1);

        int Base = sqrt(length1);
        int Height = sqrt(length2);

        int area = Base * Height;
        printf("Case %d: %d %d %d\n",i, x4, y4, area);
    }


}