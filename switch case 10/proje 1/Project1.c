#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//switch case ile ay seçme programý.

int main(int argc, char *argv[]) {
	
	
	int sayi;
	printf("lutfen ay numarasi girin:");
	scanf ("%d",&sayi);
	
	switch(sayi)
	{
		case 1:printf(" 12 FERHATin dogum gunu ocak");
		break;
		case 2:printf("23 SALiHin dogum gunu subat");
		break;
		case 3:printf("mart");
		break;
		case 4:printf("nisan");
		break;
		case 5:printf("mayýs");
		break;
		case 6:printf("haziran");
		break;
		case 7:printf("temmuz");
		break;
		case 8:printf("agustos");
		break;
		case 9:printf("eylul");
		break;
		case 10:printf("ekim");
		break;
		case 11:printf("kasým");
		break;
		case 12:printf("aralýk");
		break;
		default: printf("secenek bulunmamaktadir");
		
		
		
		
	}
	
	
	
	
	

	return 0;
}
