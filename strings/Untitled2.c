#include<stdio.h>

int main()
{
    int i = 0, j=0;
    char name[100];
    fgets(name, sizeof(name), stdin);

    while( name[i] != '\0')
    {
        if( name[i] == 'a' ||name[i] == 'e' ||name[i] == 'i' ||name[i] == 'o' ||name[i] == 'u'
          ||name[i] == 'A' ||name[i] == 'E' ||name[i] == 'I' ||name[i] == 'O' ||name[i] == 'U')
        {
            j++;
        }
        i++;
    }

    printf("%d", j);



}

