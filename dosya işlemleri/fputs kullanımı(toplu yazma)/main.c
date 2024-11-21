#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *dosya;
    char veri1[10]="yazilim ";
    char veri2[20]="muhendisligi ";
    char veri3[15]="bolumu";

    dosya=fopen("C:\\Users\\Veyse\\Desktop\\veri yazma belgesi.txt","w");

    fputs(veri1,dosya);
    fputs(veri2,dosya);
    fputs(veri3,dosya);

    return 0;
}
