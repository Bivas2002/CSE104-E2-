#include<stdio.h>

int main()
{
    char buffer[1000];
    FILE *filepointer = fopen("text.txt", "r");
    if( filepointer == NULL)
    {
        return 1;
    }

    fgets(buffer, sizeof(buffer), filepointer);
    printf("Read : %s", buffer);
    fclose(filepointer);

}