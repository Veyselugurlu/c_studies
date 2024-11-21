#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	
	printf("integerli deneme\n");
	
	int su,kola,ayran,gazoz,misir,bilet,toplam;
	
	printf("su adeti:");
	scanf("%d",&su);
	
	printf("kola adeti");
	scanf("%d",&kola);
	
	printf("ayran adeti:");
	scanf("%d",&ayran);
	
	printf("gazoz adeti:");
	scanf("%d",&gazoz);
	
	printf("misir adeti:");
	scanf("%d",&misir);
	
	printf("bilet adeti:");
	scanf("%d",&bilet);
	
	 
	toplam=su*2+kola*2+ayran*3+gazoz*4+misir*2+bilet*10;
	
	
	printf("toplam býrcunuz:%d",toplam);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
