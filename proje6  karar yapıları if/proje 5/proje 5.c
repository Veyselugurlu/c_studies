#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	// klavyeden giirlen dereceye göre , suyun durumu...
	 int su;
	 printf("dereceyi giriniz:");
	 scanf("%d",&su);
	 if (su>100)
	 {
	 	printf("su buhar halde");
	 }
	else 
		if (0<su<100)
	{
		printf("su sivi halde");
	}
	else 
	if (su<0)
   {
   	
	   	printf("su buz halde");
}
	
	
	
	
	
	
	
	
	
	
	return 0;
}
