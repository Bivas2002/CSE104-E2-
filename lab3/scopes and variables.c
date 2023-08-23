#include<stdio.h>

int a, b;

void swap()
{
    int temp;

    temp = a;
    a = b;
    b = temp;

}

int main()
{
    scanf("%d %d", &a, &b);
    printf("Before : %d, %d\n", a, b);

    swap(a, b);
    printf("After :%d, %d ", a, b);


}
