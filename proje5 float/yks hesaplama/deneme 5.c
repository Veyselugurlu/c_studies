#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	
	//aylýk 3000 tl maaþ alan bir insanýn maaþýna %20 zam geliyor bu adamýn yeni  maaþýný hesapla
	
	
/*	printf("yeni maas hesabi");
	printf("********************\n");
	
	float maas,ymaas;
	printf("maasinizi girin\n");
	scanf("%f",&maas);
	
	ymaas=(maas*20/100)+maas;
	
	printf("yenimaasiniz:%f\n",ymaas);
	
	çemberdde alan hesabý yapýyoruz*/
	
	printf("cemberde alan hesabi:\n");
	
	float pi,r,alan,cevre;
	
	printf("pi giriniz:");
	scanf("%f",&pi);
	printf("r giriniz:");
	scanf("%f",&r);

	alan=pi*r*r;
	cevre=2*pi*r;
	printf("toplam alan:%f\n",alan);
	
	printf("toplam cevre: %f",cevre);	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
