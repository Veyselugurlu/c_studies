#include <stdio.h>
#include <stdlib.h>
void islem(int s1,int s2){
    int s3;
    printf("s1 girin:");
    scanf("%d",&s1);
    printf("s2 girin:");
    scanf("%d",&s2);
    s3=(s1*s2)-s1;
    printf("%d",s3);
return s3;
}

int main()
{
    int s1,s2;

    islem(s1,s2);




    return 0;
}
