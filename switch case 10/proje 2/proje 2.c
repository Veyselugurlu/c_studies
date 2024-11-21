#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char ders;
	printf("ders ismi");
	scanf("%s",&ders);
	switch(ders)
	{
		
		case 't':printf("turkce");
		break;
		case'm':printf("matematik");
		break;
		case's':printf("sosyal");
		break;
		case'h':printf("hayat bilgisi");
		break;
		case 'f':printf("fizik");
		break;
		case 'a':printf("algoritma");
		break;
		default :printf("hatali kod girdiniz veya buyuk harfde olabilir");
		break;
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
