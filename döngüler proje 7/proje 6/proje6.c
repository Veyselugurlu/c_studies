#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// b sayi,a de�i�ken,sayac faktoriyel fordaa noktal� virg�l yok dikkat et


int main() {
	
int a,b;
int sayac=1;

printf("al�nan sayi:");
scanf("%d",&b);
for(a=1;a<=b;a++)

{
    sayac = sayac*a;
}
	printf("sonucunuz:%d",sayac);
	
	
	
	
	return 0;
}
