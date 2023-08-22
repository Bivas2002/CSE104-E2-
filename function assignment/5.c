#include<stdio.h>
#include<stdbool.h>

char checkCharacter(char c)
{
    if( c == 'a' || c == 'e'|| c == 'i'|| c == 'o' || c == 'u'||
            c == 'A' || c == 'E'|| c == 'I'|| c == 'O' || c == 'U')
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    char word;
    scanf("%c", &word);

    if(checkCharacter(word))
    {

        printf("Vowel");
    }
    else
    {
        printf("Consonent");
    }
}
