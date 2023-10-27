#include<stdio.h>

int main()
{
    char buffer[1000];
    FILE *fptr = fopen("text.txt", "w");
    if( fptr == NULL){
        return 1;
    }

    fgets(buffer, sizeof(buffer), stdin);
    fprintf(fptr,"%s",buffer);
    fclose(fptr);
}