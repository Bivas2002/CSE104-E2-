#include<stdio.h>
int main ()
{
    int t,a,b, time;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++)
    {
        scanf("%d %d",&a ,&b);
        if( a < b || a == b)
        {
            time = ( b * 4 ) + 19;
        }
        else if( a > b )
        {
           time = ((2*a - b )*4)+19;
        }
        printf("Case %d: %d\n", i, time);
    }

}