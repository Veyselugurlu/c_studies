#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float s1,s2,ort;
	printf("sayi bir girin");
	scanf("%f",&s1);
	
	printf("sayi iki girin");
	scanf("%f",&s2);
	
	ort=(s1+s2)/2;
	printf("ortalama:%f",ort);
	
	if (ort>3.4 )
	{
   	printf("sayiniz buyuktur :%f");
	}
	else
	{
printf("sayiniz kucukur :%f");
	}
	
	
	
	
	
	
	
	
	return 0;
}
