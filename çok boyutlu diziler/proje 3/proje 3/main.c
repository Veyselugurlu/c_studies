#include <stdio.h>
#include <stdlib.h>

int main()
{
    int satir,sutun,i,j;

    printf("satir sayisini girin: ");
    scanf("%d",&satir);

    printf("sutun sayisini girin: ");
    scanf("%d",&sutun);

    int matris[satir][sutun];

    for(i=0;i<satir;i++)
        {
        for(j=0;j<sutun;j++)
        {
        printf("\n [%d][%d]--->",i+1,j+1);
        scanf("%d",&matris[i][j]);
        }
        }
    for(i=0;i<satir;i++)
        {
        for(j=0;j<sutun;j++)
        {
        printf("%d ",matris[i][j]);
        }
        printf("\n");
        }



    return 0;
}
