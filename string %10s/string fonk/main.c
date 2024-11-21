#include <stdio.h>
#include <stdlib.h>

int main()
{
   char kitapad[20];
   printf("kitap adi:");
   scanf("%s",kitapad);

   printf("%13s\n",kitapad);
   printf("%25s\n",kitapad);
   printf("%-15s\n",kitapad);
   printf("%10.5s",kitapad);

    return 0;
}
