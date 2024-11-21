#include <stdio.h>
#include <stdlib.h>
int secim=0;
int sayi1=0;
int sayi2=0;
char bolum='e';
void tekcift(int a){
if(a%2==0)
{printf("sayi cifttir",a);}

else {printf("sayi tektir",a);}
}

char bolunebilme (int a,int b)
{
    if(a%b==0)
    bolum= 'e';
    else
        bolum= 'h';

   return bolum;
}
int kalan (int a,int b)
{
    return a%b;
}
int main()
{


secim:
   printf("\n***yapmak istediginiz islemi seciniz***\n");
    printf("\n1-bese bolum\n2-tekmi ciftmi?\n3-herhangi bir syaiya boluneblme\n");

    scanf("%d",&secim);
    switch(secim){
    case 1:
    goto besebolum;

case 2 :printf("sayi giriniz:");
scanf("%d",&sayi1);
tekcift(sayi1);
goto secim;
case 3 :
    printf("ilk sayiyi giriniz:\n");
    scanf("%d",&sayi1);
    printf("bolunecek sayiyi giriniz:\n");
    scanf("%d",&sayi2);
    if (bolunebilme(sayi1,sayi2)=='e')
       {

        printf("%d sayisi %d sayisina bolunur\n",sayi1,sayi2);
    }else
       {
       printf("%d sayisi %d sayisina tam bolunemez\n",sayi1,sayi2);}
        printf("%d sayisinin %d ile bolmunden kalan %d",sayi1,sayi2,kalan(sayi1,sayi2));
goto secim;


    }

    besebolum:printf("sayi giriniz:\n");
        scanf("%d",&sayi1);
        if(sayi1%5==0)
        {
            printf("sayi bese bolunur%d",sayi1);
        }
    else {printf("sayi bese bolunemez\n",sayi1);}














    return 0;
}
