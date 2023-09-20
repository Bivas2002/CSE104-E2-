#include<stdio.h>
#include<string.h>

int main()
{
    char name[100];
    fgets(name, sizeof(name), stdin);

    printf("%d\n", strlen(name));

    puts(strupr(name));//changes the real input
    puts(strlwr(name));//changes the real input



}
