#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// b sayi,a deðiþken,sayac faktoriyel fordaa noktalý virgül yok dikkat et


int main() {
	
int a,b;
int sayac=1;

printf("alýnan sayi:");
scanf("%d",&b);
for(a=1;a<=b;a++)

{
    sayac = sayac*a;
}
	printf("sonucunuz:%d",sayac);
	
	
	
	
	return 0;
}
