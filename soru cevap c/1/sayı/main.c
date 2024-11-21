#include <stdio.h>
#include <stdlib.h>
// 3 basamaklı rakamları birbirinden farklı kaç sayı vardır?
int main()
{
    int sayac=0,i,a,b,c;
for(i=100;i<1000;i++)
    {

    a=i/100;
    b=(i/10)%10;
    c=i%10;
if(a!=b&& a!=c && b!=c)
    {sayac++;}
}

printf("%d",sayac);



    return 0;
}
