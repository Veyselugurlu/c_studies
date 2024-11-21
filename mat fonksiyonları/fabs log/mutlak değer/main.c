#include <stdio.h>
#include <stdlib.h>

int main()
{
    double sayi,sonuc,sonuc2;
    printf("sayi giriniz: ");
    scanf("%lf",&sayi);

    sonuc=fabs(sayi);
    printf("%.lf\n",sonuc);

    sonuc2=log(sayi);
    printf("logaritmik cevap: %.7lf",sonuc2);




    return 0;
}
