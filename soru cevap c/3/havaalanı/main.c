#include <stdio.h>
#include <stdlib.h>
//el i�in 8,bagaj i�in s�n�r 15 elden sonrak� her kilo i�n ekstra 4 tl bagaj i�in 5 tl

int main()
{
  int normal,el, nt,et,toplam;

        printf("normal agirlik: ");
        scanf("%d",&normal);

        printf("el agirlik: ");
        scanf("%d",&el);
        if(normal<=15){
            nt=0;
        }
    else{
            nt=(normal-15)*5;
        printf("bagaj icin odemeniz gereken tutar : %d\n",nt);
    }
if (el<=8){ et=0; }
else {
        et=(el-8)*4;
        printf("elden icin odemeniz gereken tutar : %d\n",et);
         }
toplam=et+nt;
printf("toplam odemeniz gereken tutar%d... iyi yolculuklar",toplam);



    return 0;
}
