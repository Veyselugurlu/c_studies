#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {


	/*uzun ve kýsa kenarlý ondalýklý olarak girlen dikdörtgende alan ve çevre hesabý */ 
	
/*	float uk,kk,a,c;
	
	uk=10.5;
	kk=0.8;
	a=uk*kk;
	c=(uk+kk)*2;

	printf("alani:%f\n",a);
	
	printf("cevresi:%f",c);*/
	
	printf("ogrencilerin notunu hesaplama**\n");
	float a,b,c,d,ort,carpim,top,fark;
	a=10.5;
	b=21,3;
	c=3.9;
	d=14;
	ort=(a+b+c+d)/4;
	carpim=a*b*c*d;
	top=a+b+c+d;
	fark=a-b-c-d;
	
	printf("ortalama:%f\n",ort);
	printf("carpimi:%f\n",carpim);
	printf("toplami:%f\n",top);
	printf("farki=%f",fark);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
