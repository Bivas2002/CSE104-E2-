#include<stdio.h>
int getsumofdigit(int n)
{
    int sum,x,s;
    sum=0;
    scanf("%d",&n);

    while (n!=0)
    {
        x=n%10;
        sum = sum+x;
        n=n/10;
    }
    return sum;
}
int main()
{
    int x,y;
    y=getsumofdigit(x);
    printf("Sum = %d",y);
    return 0;
}
