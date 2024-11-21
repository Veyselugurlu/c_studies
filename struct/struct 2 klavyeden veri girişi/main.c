#include <stdio.h>
#include <stdlib.h>
struct kayit
{
char ad[15];
char soyad[15];
float ort;
int sinif;
};
struct kayit ogr;


int main()
{
    printf("ad girin:");
    scanf("%s",ogr.ad);
    printf("soyad:");
    scanf("%s",ogr.soyad);
    printf("ortalama:");
    scanf("%f",&ogr.ort);
    printf("sinif:");
    scanf("%d",&ogr.sinif);

    printf("%s\n",ogr.ad);
    printf("%s\n",ogr.soyad);
    printf("%.2f\n",ogr.ort);
    printf("%d",ogr.sinif);



    return 0;
}
