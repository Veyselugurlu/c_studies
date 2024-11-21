#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//girilen sayýnýn faktoriyellini while ile  hesaplayan program.
int main(int argc, char *argv[]) {
	
	
	int faktoriyel,sayi;
	faktoriyel=1;
	sayi=1;
	while (sayi<=5)

    
	{
	    faktoriyel=faktoriyel*sayi;
		sayi++;
	}
	printf("sonuc:%d\n",faktoriyel);
	
	
	
	
	
	
	
	
	
	return 0;
}
