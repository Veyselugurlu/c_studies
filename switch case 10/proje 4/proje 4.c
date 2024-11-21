#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	int sayi1,sayi2,x,sonuc,secim;
    sayi1=10;
    sayi2=20;
    x=2;
	printf("matematik menusu:\n");
	printf("******************\n");
	printf("karenin alani ve cevre hesabi:\n");
	printf("dikdortgen alani ve cevre hesabi: \n ");
	printf("5x2+7x+9 x e gore islemin sonuucu:\n");
    printf("sayinin kupu:\n");
	printf("isleminizi secin:\n");
	scanf("%d",&secim);
	switch (secim)
	{
		case 1 : printf("karenin alani: %d\n",sayi1*sayi2);
		printf("karenin cevresi %d:",sayi1*4);
		break;
		case 2 : printf("dikdortgen alani:%d\n",sayi1*sayi2);
		printf("cevre hesabi:%d\n",(sayi1+sayi2)*2);
		break;
		case 3 :printf("islem sonucu:%d\n",5*x+7*x+9);
		break;
		case 4 :printf("sayinin kupu:%d",sayi1*sayi1*sayi1);
		break;
		default : printf("hatali secim tekrar deneyiniz");
		break;
		
		
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
