#include <stdio.h>
#include <stdlib.h>

int main()
{
FILE *dosya;
char karakter[50];
dosya=fopen("C:\\Users\\Veyse\\Desktop\\veri okuma belges!!!!i.txt","r");
fgets(karakter,25,dosya);
puts(karakter);
fclose(dosya);


    return 0;
}
