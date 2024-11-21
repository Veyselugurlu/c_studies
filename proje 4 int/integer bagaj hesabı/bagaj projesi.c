#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//bagaj: 15 kg-el:8kg;
	//kg baþýna 5 tl.
	//bagaj-15,el-8,
	printf("bagaj ucretlendirmesi:");
	printf("\n");
	
	int bagaj,el,bodemesi,eodemesi,todeme;
	
	printf("bagaj kilosunu girin:");
	scanf("%d",&bagaj);
	
	printf("el kilosunu girin:");
	scanf("%d",&el);
	
	bodemesi= (bagaj-15)*5;
	eodemesi=(el-8)*5;	
	todeme=bodemesi+eodemesi;
	
	printf("\n\n");
	printf("bagaj odemesi için gereken tutar:%d\n",bodemesi);
	printf("el odemesi için gereken tutar:%d\n",eodemesi);
	printf("toplam odenmesi gereken tutar:%d",todeme);
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
