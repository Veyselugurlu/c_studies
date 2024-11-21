#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//önce eleman sayisii alýyoruz sonra sayiya yetiþene kadar girilecek sayý hesaplanýyor ondan sonra girilen sayýlar yazýlar printle
int main(int argc, char *argv[]) {
	
/*	int dizi[100];
	int i,sayi;
	printf("eleman sayisi:");
	scanf("%d",&sayi);
	for (i=0;i<sayi;i++)
	{
		printf("girilecek deger %d:\n",i+1);
		scanf("%d",&dizi[i]);
	}
	printf("\n");
	for(i=0;i<sayi;i++)
{
		printf("%d\n",dizi[i]);
}
	*/
	
/*	int dizi[100];
	int i,sayi;
	printf("eleman sayisi:\n");
	scanf("%d",&sayi);
	for(i=0;i<sayi;i++)
	{
		printf("girilecek deger:%d.",i+1);
		scanf ("%d",&dizi[i]);
	}
	for(i=0;i<sayi;i++)
{

	printf("%d\n",dizi[i]);
}*/
	
int dizi[100];
int i,sayi;
printf("eleman sayisi:");
scanf("%d",&sayi);
for(i=0;i<sayi;i++)
{
printf("girlecek degerler:%d.",i+1);
scanf("%d",&dizi[i]);
	}	
	
	for (i=0;i<sayi;i++)
	{
		printf("girilen sayilar:%d\n",dizi[i]);
	}
	
	
	
	
	
	return 0;
}
