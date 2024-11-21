#include <stdio.h>
#include <stdlib.h>

int main(){

int en,boy,i,j;
printf("en degerini girin: ");
scanf("%d",&en);
printf("boy degerini girin: ");
scanf("%d",&boy);

for(i=1;i<=boy;i++)
    {
    for(j=1;j<=en;j++)
    {
        printf("*");
    }
    printf("\n");
    }



return 0;
}
