#include<stdio.h>
int main()
{
    int i;
    int j=1;
    int k=5;
    for(i = 5; j<11; j++, k+=5){
        printf("%d x %d = %d\n", i,j,k);
    }
}
