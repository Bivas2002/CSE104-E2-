#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    FILE *filePointer = fopen("read.txt", "r");
    FILE *copyPointer = fopen("copy.txt", "w");

    if (filePointer == NULL)
    {
        printf("File could not be opened.\n");
        return 1;
    }

    char buffer[100], copy[100], c;
    fgets(buffer, sizeof(buffer), filePointer);
    printf("Read from the source file : %s\n", buffer);

    c = fgetc(filePointer);

    while (c != EOF)
    {
        fputc(c, copyPointer);
        c = fgetc(filePointer);
    }

    printf("\nContents copied to : %s", copy);


    fclose(filePointer);
    fclose(copyPointer);

    return 0;
}
