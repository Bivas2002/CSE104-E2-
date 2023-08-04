#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int i = 1;
    while (i <= N)
    {
        int num;
        scanf("%d", &num);

        if (num == 0)
        {
            printf("0\n");
        }
        else if (num > 0)
        {
            printf("+ve\n");
        }
        else
        {
            printf("-ve\n");
        }

        i++;
    }

}
