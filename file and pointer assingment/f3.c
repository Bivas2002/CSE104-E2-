#include<stdio.h>


int main() {
   FILE *filepointer = fopen("text.txt","r") ;
   char ch;
   int count=0;

   if(filepointer==NULL) {
      return 1;
   }

   while((ch=fgetc(filepointer))!=EOF){
      if(ch =='\n'){
        count++;
    }
   }
    fclose(filepointer);
    printf("%d",count);

}