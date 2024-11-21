#include <stdio.h>
#include <stdlib.h>

int main()
{
   char adsoyad[25],ad[15],soyad[15];
   printf("ad soyad girin : ");
   scanf("%s%s",ad,soyad);

   strcat(adsoyad,ad);
   strcat(adsoyad,"-");
   strcat(adsoyad,soyad);
   printf("ad soyad :%s",adsoyad);

    return 0;
}
