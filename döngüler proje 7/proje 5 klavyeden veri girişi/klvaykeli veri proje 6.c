#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	int i,sayi;
	int faktoriyel=1;
    printf("faktoriyeli alincak sayi:");
    scanf ("%d",&sayi);
    for (i=1;i<=sayi;i++)
	{
		faktoriyel=faktoriyel*i;
	}
	
	printf("sonucunuz:%d",faktoriyel);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
