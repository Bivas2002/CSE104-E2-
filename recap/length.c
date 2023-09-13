#include<stdio.h>
#include<string.h>
//fgets adds a new line character at the end!!!1
int main()
{
    char name[100];
    gets(name);
    printf("");
    puts(name);

    int length = 0;

    while(name[length] != 0)
    {
        length++;
    }

    printf("Length = %d", length);
}
