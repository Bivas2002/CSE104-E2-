#include<stdio.h>
#include<string.h>

int main()
{
    char string[] = "hello world";
    char string1[] = "hello Bivas";
    strrev(string);
    puts(string);//reverses the string

    strset(string, 'a');
    puts(string);

    strnset(string1, 'X', 5);
    puts(string1);

    int a = strcmp(string, string1);
    printf("%d", a);


}
