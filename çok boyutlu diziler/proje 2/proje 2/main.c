#include<stdio.h>
#include<stdlib.h>

int main(){

int i,j;
int matris[2][5]={10,20,30,40,50,60,70,80,90,100};

for(i=0;i<2;i++)
{
    for(j=0;j<5;j++)
    {
     printf("%d ",matris[i][j]);
    }
    printf("\n");
}






return 0;
}
