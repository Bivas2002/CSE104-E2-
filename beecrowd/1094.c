#include<stdio.h>

int main()
{
    int x, n, sum = 0, sum1 = 0, sum2 = 0, sum3= 0;
    double t, l, y;
    char name;

    scanf("%d", &x);


    for( int i = 1; i <= x; i++){
        scanf("%d %c", &n, &name);

        sum+= n;

        if( name == 'C'){
            sum1+= n;
        }
        if( name == 'R'){
            sum2+= n;

        }
        if( name == 'S'){
            sum3+= n;
        }
    }
    t=(sum1/(sum*1.0))*100.00;
    l=(sum2/(sum*1.0))*100.00;
    y=(sum3/(sum*1.0))*100.00;

    printf("Total: %d cobaias\n", sum);
    printf("Total de coelhos: %d\n", sum1);
    printf("Total de ratos: %d\n", sum2);
    printf("Total de sapos: %d\n", sum3);
    printf("Percentual de coelhos: %.2lf %%\n",t);
    printf("Percentual de ratos: %.2lf %%\n",l);
    printf("Percentual de sapos: %.2lf %%\n",y);

}