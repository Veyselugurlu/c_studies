#include <stdio.h>
#include <stdlib.h>
int secim =0;
int sayi1 =0;
int sayi2 =0;
char bol='e';

 void tekcift (int a){
 	if (a%2==0) 
 	printf("%d sayi cifttir\n", a);
 		else 
 		printf("%d sayi tektir\n", a);
 	}
	char bolunebilme (int a,int b)
	
		{
		if (a%b==0)
		bol='e';
		else 
		bol='h';
		return bol;}
	
		int kalan(int a,int b){
			return a%b;
		}
					
int main() {
	secim:
	printf("\n ne yapmak istersiniz ?\n");
	printf("1-bese bolunebilme\n");
	printf("2-sayi ciftmi tekmi\n 3-herhangi bir sayiya bolunebiliyormu kontrol et\n");
	
	scanf("%d",&secim);
	switch(secim){
		case 1 : 
		goto besebolum;
	
		case 2 :
		printf("klavyeden bir sayi girisi yapin:\n");
		scanf("%d",&sayi1);
       	tekcift(sayi1);
		goto secim;
		case 3 :
			printf("bolunecek ilk sayiyi girin:");
			scanf("%d",&sayi1);
			printf("bolonuen ikinci sayiyi girin:");
			scanf("%d",&sayi2);
			
			if 
			 
			(bolunebilme(sayi1,sayi2)=='e')
			printf("%d bolunur %d",sayi1,sayi2);
			else 
			printf("%d bolunemez%d\n",sayi1,sayi2);
			printf("sayisina boldugumuzde kalan:\n%d ",kalan(sayi1,sayi2));
			printf("\n\n");
		goto secim;
	}
	
			besebolum:
			printf("klavyeden bir sayi giriniz:\n");
			scanf("%d",&sayi1);
		if (sayi1%5==0) 
		printf("sayi bese tam bolunur");
		else
		printf ("sayi bese bolunemez");
	    goto secim;
	
	
	
	
	
	return 0;
}
