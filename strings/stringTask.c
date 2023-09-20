#include<stdio.h>
#include<string.h>

int main()
{
    char string1[] = "hello";
    char string2[] = "world";
    char string3[] = "ab";
    strncpy(string3, string1, 2);
    puts(string3);//copies and gets he
    strncat(string3, string2, 2);
    puts(string3);//concats with string3




}
