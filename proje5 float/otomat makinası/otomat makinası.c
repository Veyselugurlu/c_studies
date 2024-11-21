#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//otomat makinasý alýnan ürünlerin toplam hesabýný bulma
	printf("otomat makinasi");
	printf("\n");
	float su,kola,ayran,soda,kraker,biskuvi,misir,cips,toplam;

	printf("su adeti giriniz:");
	scanf("%f",&su);

	printf("kola adeti giriniz:");
	scanf("%f",&kola);

	printf("ayran adeti:");
	scanf("%f",&ayran);
	
	printf("soda adeti:");
	scanf("%f",&soda);

	printf("kraker adeti:");
	scanf("%f",&kraker);

	printf("biskuvi adeti:");
	scanf("%f",&biskuvi);

	printf("misir adeti:");
	scanf("%f",&misir);

	printf("cips adeti:");
	scanf("%f",&cips);

	toplam=su*1+kola*2+ayran*3+soda*3+kraker*2.5+biskuvi*3.99+misir*1.99+cips*4.99;
	printf("toplam odemeniz gereken tutar = %f",toplam);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
