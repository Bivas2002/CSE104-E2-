#include<stdio.h>

int main()
{
    float num, sum =0;
    int count = 0;

    for( int i = 1; i <= 6; i++){
        scanf("%f", &num);
        if( num > 0){
            count++;
            sum = sum + num;
        }
    }
    printf("%d valores positivos\n", count);
    printf("%.1f\n", sum/count);

}