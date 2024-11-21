#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi=5;
    int *s=&sayi;
    printf("sayi:%d\n",sayi);
    printf("bellek adresi: %x\n",s);

    char harf='z';
    char *z=&harf;
    printf("harf: %c\n",harf);
    printf("bellek adresi: %x\n",z);

    double ortalama=3.02;
    double *o=&ortalama;
    printf("ortalama:%.2lf\n",ortalama);
    printf("bellek adresi: %x\n",o);

    float puan=98;
    float *p=&puan;
    printf("puan:%.1f\n",puan);
    printf("bellek adresi: %x\n",p);

    int imbd=9;
    int *i=&imbd;
    printf("imbd:%d\n",imbd);
    printf("bellek adresi:%x\n",i);




    return 0;
}
