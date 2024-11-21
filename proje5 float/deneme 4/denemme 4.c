#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	
	float sayi1,sayi2,sayi3,toplam,carpim,bolum;
	printf("birinci sayi giriniz:");
	scanf("%f",&sayi1);
	
	printf("ikinci sayi giriniz:");
	scanf("%f",&sayi2);
	
	printf("ucuncu sayi giriniz");
	scanf("%f",&sayi3);
	
	toplam=sayi1+sayi2+sayi3;
	carpim=sayi1*sayi2*sayi3;
	bolum=(sayi1+sayi2+sayi3)/3;
	
	
	printf("toplam:%f\n",toplam);
	printf("carpim:%f\n",carpim);
	printf("bolum:%f",bolum);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
