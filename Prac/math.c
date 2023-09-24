#include<stdio.h>

int main()
{
    int t, a, b, c, res1, res2, res3;
    scanf("%d", &t);

    for( int i =  1; i<= t; i++){
        scanf("%d %d %d", &a, &b, &c);
        res1 = a*a;
        res2 = b*b;        
        res3 = c*c;

        if( (res1 == res2 + res3) ||(res2 == res3 + res1)|| (res3 == res2 + res1) ){
            printf("Case %d: yes\n", i);
        }
        else{
            printf("Case %d: no\n", i);
        }
           
    }

    return 0;


}