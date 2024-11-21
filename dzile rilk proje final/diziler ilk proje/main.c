#include <stdio.h>
#include <stdlib.h>
#define sinifmevcudu 5
int main()
{
   int ogrencinumaralari[sinifmevcudu]={1,2,3,4,5};
   int sayac=0;
    for (sayac=0;sayac<5;sayac++)
    {
        printf("%d.ogrencinumarasi:%d \n",sayac+1,ogrencinumaralari[sayac]);

    }
//diziler bellekte ne kadar yer kaplar
int a[5];
float b[5];
char c[5];
double d[5];
 printf("a dizisinin boyutu:%dbyte\n",sizeof(a));//sizeof fonksiyonu int deðerine geri çevirir...
 printf("b dizisinin boyutu:%dbyte\n",sizeof (b));
 printf("c dizisinin boyutu :%dbyte\n",sizeof(c));
 printf("d dizisinin boyutu %dbyte\n",sizeof(d));

{int vize[sinifmevcudu],final[sinifmevcudu],ysnotu[sinifmevcudu];
for(sayac=0;sayac<3;sayac++)
{
    printf("%d.ogrencinin notunu girin ",sayac+1);
    scanf("%d",&vize[sayac]);
    printf("%d. ogrencinin final notunu girin :",sayac+1);
    scanf("%d",&final[sayac]);
   ysnotu[sayac]=vize[sayac]*0.4+final[sayac]*0.6;//hata yaptýðým yer sayaclar yerine siif mevcudunu yazmam ...
}
for(int sayac2=0;sayac2<3;sayac2++){
    printf("\n%d.ogrencinin yýl sonu notu=%d\n",sayac2+1,ysnotu[sayac2]);

}
}
    return 0;
}
