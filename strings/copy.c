#include<stdio.h>
#include<string.h>

int main()
{
    char str1[] = "hello";
    char str2[] = "world";
    char str3[] = "abc";

    strcat(str1, str2);

    puts(str1);

    strncat(str2, str1, 3);
    puts(str2);

    strcpy(str2, str3);
    puts(str2);

    strncpy(str1, str3, 3);
    puts(str1);




}

