#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,k,l,m,n,x,y;

    for(k=1;k<=6;k++)
        {
    for(l=6;l>=k;l--)
        {
        printf("*");
        }
        printf("\n");
        }
    for(i=1;i<=6;i++ )
        {
        for(j=1;j<=i;j++)
        {
         printf("*");
        }
         printf("\n");
       }



    return 0;
}
