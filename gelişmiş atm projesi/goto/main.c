#include <stdio.h>
#include <stdlib.h>

int bolum(int a ,int b )
{
    return a/b;
}



int main()
{

int s1,s2;
int secim=0;
    secim:
        printf("ne yapmak istersin 1. bolme\n:");
        scanf("%d",&secim);

    switch(secim)
{
    case 1: printf("bit sayi girin");
        scanf("%d",&s1);
        printf("iki sayi giirn");
        scanf("%d",&s2);
        printf("%d/%d=%d",s1,s2,bolum(s1,s2));
}







    return 0;
}
