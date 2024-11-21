#include <stdio.h>
#include <stdlib.h>
void dortgen(int k,int u){
    int i,j;
for(i=0;i<k;i++){
    for(j=0;j<u;j++)
    {
        printf("*");
    }
    printf("\n");
}
}
int main()
{

    dortgen(12,3);

    return 0;
}
