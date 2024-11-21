#include <stdio.h>
#include <stdlib.h>
 struct
 kitapbilgisi {
     char yazar[15];
     char kitad[15];
     int fiyat;
     float puan;
 };
int main()
{
    struct kitapbilgisi kb={"sekerportakali","ali",10,7.43};

    printf("kitap ad: %s\n",kb.kitad);
    printf("yazar: %s\n",kb.yazar);
    printf("fiyat: %d\n",kb.fiyat);
    printf("puan: %.2f:",kb.puan);


    return 0;
}
