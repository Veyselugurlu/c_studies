#include <stdio.h>
#include <stdlib.h>

int main()
{
    char adres[20]="yazilim proje evi";
    char *a=&adres;

    printf("adres:%s\n",adres);
    printf("bellek adresi: %x\n",a);
    a++;
    printf("bellek adresi:%x\n",a);
    a--;
    printf("bellek adresi:%x\n",a);
    a+=4;
    printf("bellek adresi:%x\n",a);
    a=a+5;
    printf("bellek  adresi:%x",a);







    return 0;
}
