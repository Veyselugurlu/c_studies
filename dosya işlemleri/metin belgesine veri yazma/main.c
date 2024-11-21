#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *dosya;
    dosya=fopen("C:\\Users\\Veyse\\Desktop\\veri yazma belgesi.txt","w");

    putc('a',dosya);
    putc('\n',dosya);
    putc('b',dosya);
    putc('c',dosya);
    fclose(dosya);






     return 0;
}
