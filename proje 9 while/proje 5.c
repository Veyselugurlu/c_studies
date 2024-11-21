#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// klavyeden girilen sayýnýn faktoriyelini hesaplayan program.
int main(int argc, char *argv[]) {
	
	int sayi,faktoriyel;
	printf("sayi giriniz:");
	scanf("%d",&sayi);
	
	printf("faktoriyel degeriini girin:");
	scanf("%d",&faktoriyel);
	
	while (sayi<=5)
	
	{
		faktoriyel=faktoriyel*sayi;
		sayi++;
	}
	printf("sonuc :%d\n",faktoriyel);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
