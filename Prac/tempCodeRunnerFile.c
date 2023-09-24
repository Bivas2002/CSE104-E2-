#include<stdio.h>

int main()
{
    int t, a, b;
    scanf("%d", &t);

    for( int i = 1; i <= t; i++){
        scanf("%d %d" ,&a, &b);
        if( a == b || a < b){
        int time = ( b * 4 + 19 );
        printf("Case %d : %d\n",i, time);
        }
        else if( a > b ){
        int time2 = ( (2 * a - b) * 4) + 19;
        printf("Case %d : %d\n",i, time2);
        }
    }

}