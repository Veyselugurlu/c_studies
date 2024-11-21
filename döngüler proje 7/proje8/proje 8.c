#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//tribonacci (ьзlь dizi);



int main(int argc, char *argv[]) {
	
	int a,b,c,d,i;
	a=1;
	b=1;
	c=1;
	printf("%d\n",a);
	printf("%d\n",b);
	printf("%d\n",c);
	
	
	for(i=1;i<=10;i++)	
	{
		d=a+b+c;
		a=b;
		b=c;
		c=d;
		printf("%d\n",d);
	}
	
	
	
	
	return 0;
}
