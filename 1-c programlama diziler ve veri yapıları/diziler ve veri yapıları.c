#include <stdio.h>
//#define sinifmevcudu 5
#define sinif 3
int main(){

/*{
    int ogrencinumaralari[sinifmevcudu]= {1,2,3,4,5};

    float vize [sinifmevcudu];
    float final [sinifmevcudu];
    for (int i=0;i<5;i++)
    {
        printf("%d.not ortalamasi:%d\n",i+1,ogrencinumaralari[i]);
    }
// diziler bellekte ne kadar yer kaplar? bunu hesaplatan program
// dizinin tanýmlanmýþ deðerinin elemman sayisiyla çarpimi*/


{




int a[1];
char b[1];
float c[1];
double d[1];

printf("a dizisinin boyutu :%d byte\n",sizeof(a));
printf("b dizisinin boyutu:%d byte\n",sizeof(b));
printf("c dizisinin boyutu:%d byte\n",sizeof(c));
printf("d dizisinin boyutu :%d byte\n",sizeof(d));
}
{


    int vize[sinif],final[sinif],ysnotu[sinif];
    for (int sayac=0; sayac<3; sayac++){
        printf("\n%d. ogrencinin vize notunu giriniz:\t\n",sayac+1);
    scanf("%d",&vize[sayac]);
    printf("\n%d.ogrencinþn final notunu giriniz:\t",sayac+1);
    scanf("%d",&final[sayac]);
    ysnotu[sayac]=vize[sayac]*0.4+final[sayac]*0.6;
    }
    for (int sayac2=0;sayac2<3;sayac2++){
        printf("%d.ogrencinin not ortalamaasi:%d\n",sayac2+1,ysnotu[sayac2]);

    }
}


    return 0;
}
