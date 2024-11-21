#include <stdio.h>
#include <stdlib.h>

int main()
{
    char kitapadi[30]="araba sevdasi";
    char kopya[30]="";

    strcpy(kopya,kitapadi);//nereye nereden  kopyalancak...
    printf("%s\n",kopya);

    char kitapad[15]="beyaz gemi";
    char kopy[15]="";
    strncpy(kopy,kitapad,5);
    printf("%s",kopy);

    return 0;
}
