#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,uzunluk;
    printf("ucgenin uzunlugunu giriniz: ");
    scanf("%d",&uzunluk);

    for(i=1;i<=uzunluk;i++)
    {

     for(j=1;j<=uzunluk-i;j++){
        printf(" ");
     }


    for(j=1;j<=i;j++){
        printf(" *");
    }
    printf("\n");
    }
	return 0;
}
