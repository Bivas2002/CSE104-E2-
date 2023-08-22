#include<stdio.h>
void showfibonacciseries(int n)
{
    int x,y,s,i;
    scanf("%d",&n);
    x=0,y=1;
    printf("%d %d",x,y);
    for (i=1;i<=(n-2);i++)
    {

        s=x+y;
        printf(" %d ",s);
        x=y;
        y=s;
    }
}
int main()
{
    int n;
    showfibonacciseries(n);
}

