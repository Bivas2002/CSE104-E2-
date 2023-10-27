#include <stdio.h> 

int main() 
{ 
	FILE *filepointer = fopen("text.txt", "r"); 
    FILE *copypointer = fopen("copy.txt", "w");
	char filename[100], c; 

	if (filepointer == NULL) 
	{ 
        return 1;
	} 

	if (copypointer == NULL) 
	{ 
        return 1;
	} 

	c = fgetc(filepointer); 
	while (c != EOF) 
	{ 
		fputc(c, copypointer); 
		c = fgetc(filepointer); 
	} 

	fclose(filepointer); 
	fclose(copypointer); 
	return 0; 
}
