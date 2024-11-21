#include <stdio.h>
#include <stdlib.h>

int main()
{
   int sayi=20;
   int a=10;
   float b=3.34;
   double c=12.34;
   char kelime[12]="mufettis";

   printf("sayi: %d\n",sayi);
   printf("a: %d\n",a);
   printf("b: %.2f\n",b);
   printf("double: %.3lf\n",c);
   printf("kelime:%s",kelime);

   printf("\n**bellek adresleri**\n");

   printf("%x\n",&sayi);
   printf("%x\n",&a);
   printf("%x\n",&b);
   printf("%x\n",&c);
   printf("%x\n",&kelime);


    return 0;
}
