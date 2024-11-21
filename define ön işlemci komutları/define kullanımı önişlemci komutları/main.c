#include <stdio.h>
#include <stdlib.h>
#define puan 2.30
int main()
{
    float turkce,mat,sozelpuan,sayisalpuan;
    printf("turkce netiniz:");
    scanf("%f",&turkce);
    sozelpuan=turkce*puan;
    printf("sozel puaniniz: %f\n",sozelpuan);
    printf("\n mat netiniz: ");
    scanf("%f",&mat);
    sayisalpuan=turkce*puan+mat*puan;
    printf("sayisal puaniniz: %f",sayisalpuan);








    return 0;
}
