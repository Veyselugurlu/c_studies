#include <stdio.h>
#include <stdlib.h>


// atm projesi

int main()
{

    int bakiye=1000,sifre,parayatirma,paracekme,secim,mevcutbakiye,start;
    start:
    printf("sifreniz:");
    scanf("%d",&sifre);
    if (sifre==1210505037){


    islem:
    printf("bankamiza hosgeldiniz\n");
    printf("yapmak istediginiz islem nedir ?\n");
    printf("1- para cekme\n");
    printf("2-para yatirma\n");
    scanf("%d",&secim);

    switch(secim)
    {
    case 1:printf("cekmek istediginiz tutar?\n");
    scanf("%d",&paracekme);
    mevcutbakiye=bakiye-paracekme;
    printf("hesabinizda kalan tutar=%d\n",mevcutbakiye);
    printf("iyi gunler dileriz..\n");
break;
    case 2:printf("yatirmak istediginiz tutar=\n");
    scanf("%d",&parayatirma);
    printf("mevcut bakiyeniz:%d",bakiye+parayatirma);
    break;
 default :printf("hatali islem sectiniz tekrar secim yappiniz:\n");
 goto islem;
}

}else
{
    printf("hatali sifre tekrar deneyiniz!");
    goto start;
}






    return 0;
}
