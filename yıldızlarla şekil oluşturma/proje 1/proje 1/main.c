#include <stdio.h>
#include <stdlib.h>
void ucgen(int i,int j  ){

    printf("\n");
for(i=1;i<=8;i++)
    {
    for(j=1;j<=i;j++){
        printf("*");
    }
printf("\n");
}


}



int main()
{

int i,j;



for(i=1;i<=6;i++)
{
    for(j=1;j<=3;j++)
    {
        printf("*");
    }
printf("\n");
}

ucgen(i,j);





return 0;
 }
