#include <stdio.h>
#include <stdlib.h>

struct yarismacilar
{
    int ad[10];
    int soyad[10];
    float puanlar[10];
    float sonuc;
};


float puanHesap(struct yarismacilar hepsi)
{
    int i;
    float max=0.0,min=6.0,cevap=0.0;
    for(i=0;i<10;i++)
    {

        cevap+=hepsi.puanlar[i];
        if(hepsi.puanlar[i]>max)
        {
            max=hepsi.puanlar[i];
        }
        else if(hepsi.puanlar[i]<min)
        {
            min=hepsi.puanlar[i];
        }
    }
    hepsi.sonuc=(cevap-max-min)/8;
    return hepsi.sonuc;
}


int main()
{

    int i,j,n,birinci;
    float max=0.0;

    struct yarismacilar yarismaci[100];

    printf("kisi sayisini gir:\n");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("%d.kisinin ismi gir:\n",i+1);

        scanf(" %s",&yarismaci[i].ad);

        printf("%d.kisinin soyadýný gir:\n",i+1);

        scanf("%s",&yarismaci[i].soyad);

        printf("%d. kisinin puanlari:\n",i+1);

        for(j=0;j<10;j++)
        {
            scanf("%f",&yarismaci[i].puanlar[j]);
        }

        yarismaci[i].sonuc= puanHesap(yarismaci[i]);


        if(yarismaci[i].sonuc>max)
        {
            max=yarismaci[i].sonuc;
            birinci=i;
        }
    }

    printf("%s %s kisisi birinci ve puaný %f",yarismaci[birinci].ad,yarismaci[i].soyad,max);



    return 0;
    }
