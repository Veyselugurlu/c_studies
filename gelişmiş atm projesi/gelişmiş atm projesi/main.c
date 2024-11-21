#include <stdio.h>
#include <stdlib.h>
//void satis(float ds,float dk,float d,float bakiye){


int main(){
float at;

float s,a,ak,dk,ek,sk,aa,as,da,ds,ea,es,ss,sa,py,pc,islem,start,d,sifre,e;
d=10;
e=10;
a=1;
s=10;
int secim,secim2;
ak=800;
dk=13.4;
ek=14.7;
sk=17,6;
float yt,ct,iban;//yatýrlýcak tutar yt,,,cekilecek tutar ct.
float bakiye=2000;
start:
printf("\nugurlu bankacilik sistemimize hosgeldiniz\n");
printf("sifreniz:\n");
scanf(" %f",&sifre);
if (sifre==2002)

    {
islem:
    printf("\nhosgeldiniz veysel bey \n");
    printf("yapmak istediginiz islemi seciniz\n");
    printf("1-para yatirma\n");
    printf("2-para cekme\n");
    printf("3-doviz islemleri\n");
    printf("4-hesaba para aktarma\n");
    printf("5-hesaptan cikis\n");
    scanf("%d",&secim);
switch (secim)
{
    case 1 :
printf("para yatirma islemini sectiniz\n ");
printf("bakiyeniz:%f",bakiye);
printf("yatirilacak tutari giriniz:%f\n",yt);
scanf("%f",&yt);
bakiye=bakiye+yt;
printf("guncel bakiyeniz:%f tl",bakiye);
goto islem;
break;

    case 2:goto cekis;

    goto start;
    case 3:
        go:
        printf("döviz islemlerini sectiniz \n");
        printf(" yapmak istediginiz islemi seciniz \n");
        printf("1-dolar alis \n");
        printf("2-dolar satis \n");
        printf("3-euro alis \n");
        printf("4-euro satis \n");
        printf("5-altin alis \n");
        printf("6-altin satis \n");
        printf("7-sterlin alis \n");
        printf("8-sterlin satis \n");
        printf("9-geri \n");
        scanf("%d",&secim2);
        switch(secim2)
        {
        case 1:printf("dolar alis islemi sectiniz\n");
        printf("guncel dolar alis kuru: %f\n",dk);
        printf("alacaginiz dolar miktari: \n");
        scanf("%f",&da);
        if (bakiye-da*dk>=0){
            printf("isleminiz basari ile gerceklesmistir\n");
            printf("almis oldugunuz dolar miktari: %f \n" ,da);
            bakiye=bakiye-da*dk;
            printf("guncel bakiyeniz%f tl \n",bakiye-d*dk+da*dk);
goto start;
break;
        }
        else {  printf("bakiye yetersiz \n"); }

goto islem;

        case 2:

printf("dolar satis islemini sectiniz\n");
printf("hesabınızdaki dolar miktari \n");
printf("guncel dolar satis kuru%ftl\n",dk);
printf("satmak istediginiz dolar miktarini giriniz:\n");
scanf("%f",&ds);
if (bakiye-ds*dk>=0){
printf("isleminiz basari ile gerceklesmistir\n");
printf("hesabınıza satis uzerinden eklenen bakiye%f tl \n",ds*dk);

printf("toplam bakiyeniz%f tl:\n",bakiye+ds*dk);

}
else {
    printf("\nbakiye yetesiz\n");
}








            goto start;
break;
        case 3:
            printf("euro alma islemini sectiniz \n");
            printf("guncel bakiyeniz: %f \n",bakiye);
            printf("guncel euro kuru: %f \n",ek);
            printf("almak istediginiz euro miktarini giriniz:%f \n",ea);
            scanf("%f",&ea);
            if(bakiye-ea*ek>=0){
                printf("isleminiz basari ile gerceklesmistir\n");
                printf("almis oldugunuz euro miktari%f\n",ea);
                printf("kalan tl bakiyeniz%f tl \n",bakiye-ea*ek);

goto start;
break;
            }
else { printf("bakiye yetersiz !!"); }

goto start;
         case 4:
         printf("\neuro satis islemini sectiniz\n");
         printf("euro bakiyeniz: %f\n",e);
         printf("guncel euro kuru: %f\n",ek);
         printf("satmak istediginiz euro miktarini giriniz =\n");
         scanf("%f",&es);
         if(bakiye-es*ek>0){
            printf("isleminiz basari ile gerceklesmisir\n");
            printf("satistan elde edilen bakiye%f tl",es*ek);
            printf("toplam guncel TL uzerinden bakiyeniz%f tl",bakiye-es*ek+es*ek);
       goto start;
       break;  }
             else { printf("bakiye yetersiz!!!\n"); }

            case 5:
                printf("altin alma islemini sectiniz\n");
                printf("guncel altin bakiyeniz: %f gr\n");
                printf("guncel altin satis kuru: %f tl\n",ak);
                printf("almak istediginiz altın gramını giriniz: \n");
                scanf("%f",&aa);
                if(bakiye-aa*ak>=0)
                {
                    printf("isleminiz basari ile gerceklesmistir\n");
                    printf("aldiginiz altin miktari: %f gr\n",aa);
                    printf("toplam Tl bakiyeniz: %f Tl\n",bakiye-aa*ak);

                }
                else{ printf("yetersiz bakiye!!!\n");  }
                goto start;
                break;
                case 6:
                    printf("altin satis islemini sectiniz \n");
                    printf("guncel altin bakiyeniz: %f gr\n");
                    printf("guncel altin satis kuru: %f tl\n",ak);
                    printf("satmak istediginiz altin gramini giriniz:\n" );
                    scanf("%f",&as);
                    if(bakiye-as*ak>=0)
{
    printf("isleminiz basari ile gerceklesmistir\n");
    printf("guncel altin bakiyeniz %f gr\n",as*ak);
    printf(" toplam bakiyeniz %f tl...\n",bakiye-as*ak+as*ak);

}
else { printf("bakiye yetersiz!!!"); }
goto start;
break;
            case 7:
            printf("sterlin alis islemini sectiniz\n");
            printf("guncel sterlin bakiyeniz: %f \n",s);
            printf("guncel sterlin kuru: %f tl \n",sk);
            printf("almak istediginiz sterlin miktarini giriniz:\n");
            scanf("%f",&sa);
            if(bakiye-sa*sk>=0)
            {
                printf("isleminiz basari ile gerceklesmistir\n");
                printf("guncel sterlin bakiyenizÇ:%f\n",s+sa);
                printf("toplam  tl bakiyeniz %f tl...\n",bakiye+sa*sk+s*sk);

            }
            else
            {printf("bakiye yetersiz!!!");
            }

            case 8:
                printf("sterlin satis islemini seciniz\n");
                printf("sterlin bakiyeniz: %f\n",s);
                printf("guncel sterlin satis kuru %f tl\n",sk);
                printf("satmak istediginiz sterlin miktarini giriniz:\n");
                scanf ("%f",&ss);
                if(s-ss>=0){
                    printf("isleminiz basari ile gerceklesmistir\n");
                    printf("guncel sterlin bakiyeniz:%f\n",s-ss);
                    printf("toplam tl bakiyeniz:%f tl...\n",(s-ss)*sk+bakiye+ss*sk);
                }
                else {
                    printf("bakiye yetersiz!!!");

                }

                goto islem;
                break;

            case 9:goto geri;

            default: printf("\nhatali islem  sectiniz tekrar deneyiniz!!!\n");
            goto go;
            break;

                    }
geri:
    goto islem;
    break;
printf("\n*********************************************************\n");

            case 4:
                printf("\nhesaba para aktarma islemini sectiniz\n");
                printf("hesaba para aktaracaginiz ibani giriniz\n",iban);
                scanf("%f",&iban);
                if (iban==1){ printf("para aktaracaginiz kisi veysel ugurlu \n");
                printf("aktarmak istediginiz tutarı giriniz:\n");
                scanf("%f",&at);
                if(bakiye-at>0)
                    {
                    printf("isleminiz basari ile gerceklesmistir \n");
                    printf("yatirdiginiz tutar:\n",at);
                    printf("kalan bakiyeniz:%f tl\n",bakiye-at);
                    goto start ;
                    break;
                    }
                    else
                    {
                        printf("bakiye yetersiz!!!");
                        goto start;
                        break;
                    }


}
case 5: printf("cikis yapılıyor...\n");
goto start;
break;
default:printf("\nhatali islem sectiniz!!!\n");
goto start;
break;

}

cekis:
    printf("para cekme islemini sectiniz\n");
    printf("bakiyeniz %f\n",bakiye+py);
    printf("\ncekmek istediginiz tutar %f \n");
    scanf("%f",&ct);
if ( bakiye-ct>=0)
{

    bakiye=bakiye-ct;
    printf("güncel bakiyeniz\n %f\n",bakiye);
    goto islem;
}

else { printf("bakiye yetersiz!!\n"); }
goto start;


}







else {
    printf("hatali sifre girdiniz!!!\n tekrar deneyiniz\n");
    goto start;
}



return 0;
}

