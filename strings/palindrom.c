#include<stdio.h>
#include<string.h>

int main()
{
    char string1[] = "Bivas";
    char string2[100];

    strcpy(string2, string1);
    strrev(string1);

    int a = strcmp(string1, string2);
    if( a == 0)
    {
        printf("palindrom");
    }
    else{
        printf("not palindrom");
    }
}
