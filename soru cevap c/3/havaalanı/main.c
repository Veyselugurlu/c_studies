#include <stdio.h>
#include <stdlib.h>
//el için 8,bagaj için sýnýr 15 elden sonrakþ her kilo içn ekstra 4 tl bagaj için 5 tl

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
