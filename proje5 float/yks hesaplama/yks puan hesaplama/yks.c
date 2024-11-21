#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	printf("yks puan hesaplama:\n\n");
	float turkce,mat,fen,sosyal,taban,toplam;
	
	taban=100.160;
	printf("turkce netiniz=");
	scanf("%f",&turkce);
	
	printf("mat netiniz=");
	scanf("%f",&mat);
	
	printf ("fen netininiz=");
	scanf("%f",&fen);
	
	printf("sosyal netiniz=");
	scanf("%f",&sosyal);
	
	toplam=turkce*1.999+mat*3.998+fen*2.999+sosyal*1+taban;
	printf("yks toplam sonucunuz: %f",toplam);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
