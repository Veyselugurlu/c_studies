#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// toplama çýkarma bolme us alma yazdýran program.

int main(int argc, char *argv[]) {
	
	int sayi1,sayi2,sonuc;
	char islem;
	sayi1=40;
	sayi2=20;
	printf("islemi secin= ");
	scanf("%s",&islem);
  
		
	switch(islem)
{
	case '-': printf("sonuc :%d",sonuc);
	sonuc=sayi1-sayi2;
	break;   
	case '+':sonuc=sayi1+sayi2;
	printf("sonuc :%d",sonuc);
	break;
	case '/': sonuc=sayi1/sayi2;
	printf("sonuc :%d",sonuc); 
	break;
	case '*': sonuc=sayi1*sayi2;
	printf("carpim :%d",sonuc);
	break;
	default :printf("olmayan islemi seciniz");
	break;
    }
	
	
	
	return 0;
}
