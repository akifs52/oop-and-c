#include <stdio.h>
#include <stdlib.h>


struct yarismacilar
{
    char ad[10];
    char soyad[10];
    float puanlar[10];
    float sonuc;
};

float average( struct yarismacilar ninci)
{
    int i;
    float max=0.0;
    float min=6.0;
    float cevap=0.0;

    for(i=0;i<10;i++)
    {
        if(ninci.puanlar[i]>max)
        {
            max=ninci.puanlar[i];
        }
        else if(ninci.puanlar[i]<min)
        {
            min=ninci.puanlar[i];
        }
        cevap+=ninci.puanlar[i];
    }
    cevap=(cevap-max-min)/8;
    return cevap;
}


int main()
{
    struct yarismacilar yarismaci;

    printf("isim:\n");
    scanf("%s",&yarismaci.ad);
    printf("soyisim:\n");
    scanf("%s",yarismaci.soyad);

    printf("puanlari girin:\n");

    for(int i=0;i<10;i++)
    {
        scanf("%f",&yarismaci.puanlar[i]);
    }

    yarismaci.sonuc=average(yarismaci);
    printf("%s %s: %f",yarismaci.ad,yarismaci.soyad,yarismaci.sonuc);



    return 0;
}
