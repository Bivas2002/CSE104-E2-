#include<stdio.h>
#include<stdbool.h>

int Prime(int n)
{

    int count = 0;

    for( int i = 1; i <= n; i++)
    {
        if( n > 0 && n % i == 0)
        {
            count++;
        }
    }

    if( count == 2 )
    {
        return true;
    }
    else
    {
        return false;
    }

}
int main()
{

    int n;
    scanf("%d", &n);

    if(Prime(n))
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }


}
