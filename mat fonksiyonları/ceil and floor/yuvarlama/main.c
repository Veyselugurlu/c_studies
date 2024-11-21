#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sayi,sonuc,sonuc2;

    printf("deger girin: ");
    scanf("%f ",&sayi);
    sonuc=floor(sayi);
    printf("sonuc: %.f",sonuc);
    printf("\n");
    sonuc2=ceil(sayi);
    printf("sonuc: %.f",sonuc2);



    return 0;
}
