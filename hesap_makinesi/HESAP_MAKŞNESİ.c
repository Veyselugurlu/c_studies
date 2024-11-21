#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int a,b;
	char secim;
	
basla:
	printf("yapmak istediginiz islem\n");
	printf("toplama icin 1\n");
	printf("cýkarma icin 2 \n");
	printf("bolme icin 3 \n ");
	printf("carma icin 4 \n");
	scanf("%s",&secim);
	
	switch (secim)
	{
		case '1':
		printf("ilk sayiyi giriniz:\n");
		scanf("%d",&a);
		printf("ikinci sayiyi girin:\n");
		scanf("%d",&b);
		printf("toplam sonucu: %d",a+b);
		goto basla;
		break;
		case '2':

		printf("cikarilacak ilk sayi:\n");
		scanf("%d",&a);
		printf("cikarilacak ikinci sayi:\n");
		scanf ("%d",&b);
		printf("sonuc: %d",a-b);
		goto basla;
		break;
		
		case '3' :
			printf("ilk sayi: ");
			scanf("%d",&a);
			printf("ikinci sayi: ");
			scanf("%d",&b);
			printf("bolum sonucu: =%d",a/b);
			goto basla;
			break;
			case '4':
				printf("ilk sayi:");
				scanf("%d",&a);
				printf("ikinci sayi:");
				scanf("%d",&b);
				printf("carpim sonucu=%d",a*b);
			goto basla;
				break ;
				default : printf("sectiginiz islem bulunmamaktadir tekrar secin \n\n");		
			goto basla;		
	} 
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
