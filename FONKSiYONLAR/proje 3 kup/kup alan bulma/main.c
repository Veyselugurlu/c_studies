#include <stdio.h>
#include <stdlib.h>
int kupbul(int a,int y)
{
int sonuc=pow(a,y);
return sonuc;
}
int main()
{
    int a,y;
    printf("taban girin:");
    scanf("%d",&a);
    printf("us girin:");
    scanf("%d",&y);

    printf("sonuc:%d",kupbul(a,y));









    return 0;
}
