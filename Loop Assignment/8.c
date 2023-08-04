#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int i = 1;
    while (i <= N)
    {
        int age;
        scanf("%d", &age);

        if(age == 0)
        {
            break;
        }
        else if( age <=3 )
        {
            printf("Toddler\n");
        }
        else if( age <= 9)
        {
            printf("Child\n");
        }
        else if( age <= 12)
        {
            printf("Tween\n");
        }
        else if( age <= 19)
        {
            printf("Teen\n");
        }
        else if( age <= 24)
        {
            printf("Young Adult\n");
        }
        else if( age >= 25)
        {
            printf("Adult\n", i);
        }
        i++;
    }
}

