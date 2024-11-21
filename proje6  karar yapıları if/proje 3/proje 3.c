#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//klavyeden girilen say 3 e ve 5 e tam bolunuyorsa.(&& ve demek ||veya demek  == eþitmidir eþit deðilmidir!=)...
	
	int a;
	printf("a yi giriniz:");
	scanf("d",&a);
	if (a%3==0 && a%5==0)
	{
		printf("a uce ve bese tam bolunur");
	}
	else 
	{
		printf("a uce ve bese tam bolunemez");
	
	}
	
	
	
	
	
	
	
	
	return 0;
}
