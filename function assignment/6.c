#include<stdio.h>

int getArea( int b, int h)
{

    int area = (0.5)*b*h;

    return area;
}

int main()
{

    int b, h;
    scanf("%d %d", &b, &h);
    printf("Area = %d", getArea(b, h));

}
