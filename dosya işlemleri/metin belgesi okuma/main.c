#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE *belge;
   char karakter;
   belge=fopen("‪C:\\Users\\Veyse\\Desktop\\veri okuma belgesi.txt","r");
   do
   {
    karakter=getc(belge);

    printf("%c",karakter);

   }
   while(karakter!=EOF);
   fclose(belge);


    return 0;
}
