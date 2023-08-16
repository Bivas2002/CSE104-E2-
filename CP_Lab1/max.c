#include<stdio.h>

int getMax( int a, int b){

    if( a > b )
    {
        return a;
    }
    else{
       return b;
    }
}

int main()
{
    printf("%d",  getMax(4, 5));
}
