#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	/*3 sýnav ve bir proje notu girilen öðrenci 
nin ortalamasýný hesaplayýn dersten geçtimi vs....
	ort<50--> ff 
	60<ort>-->50dd
	60<ort<-->70cc
	70<ort<-->85 bb
	ort>85 aa      */
	
	int s1,s2,s3,p,ort;
    printf("sinav 1 i giirniz:");
    scanf("%d",&s1);
    printf("sinav 2 i giriniz:");
    scanf("%d",&s2);
    printf("sinav 3 u giriniz:");
    scanf("%d",&s3);
    printf("proje notunu giriniz:");
    scanf("%d",&p);
    ort=(s1+s2+s3+p)/4;
    printf("ortalamasi:%d\n",ort);
    if(ort<55)
    {
    	printf("dersten kaldiniz");
	}
   else
   
   	if("50<ort<60")
   {
   	printf("notun dd");
   }
   else
    if(60<ort<70)
    {
    	printf("notunuz : cc");
   	}
    else
	if(70<ort<85)	
	{
		printf("notunuz:bb");	
	}
	else
	if(85<ort)
	{
	printf("notunuz:aa");
	}
	
	
	
	
	
	
	
	
	return 0;
}
