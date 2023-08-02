#include<stdio.h>
int main()
{
    int i = 0;
    for( ; ;){
        printf("%d\n", i+=2);
        if( i > 56){
            break;
        }
    }
}
